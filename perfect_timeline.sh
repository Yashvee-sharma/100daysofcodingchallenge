#!/bin/bash

# Hardcoded calendar days to bypass Windows system date bugs completely
months=(8 9)
start_days=(10 1)
end_days=(31 18)
year=2026

FILE_INDEX=0

# Gather and sort all your C files naturally
mapfile -t files < <(find . -maxdepth 1 -name "*.c" | sed 's|^\./||' | sort -V)
TOTAL_FILES=${#files[@]}

for m in "${!months[@]}"; do
    month=${months[$m]}
    start=${start_days[$m]}
    end=${end_days[$m]}
    
    for ((day=start; day<=end; day++)); do
        # Format strings to double digits (e.g. 08, 09)
        printf -v m_str "%02d" $month
        printf -v d_str "%02d" $day
        CURRENT_DATE="${year}-${m_str}-${d_str}"
        TIMESTAMP="${CURRENT_DATE}T12:00:00"
        
        # Commit exactly 2 files for this specific calendar loop day
        for ((i=0; i<2; i++)); do
            if [ $FILE_INDEX -lt $TOTAL_FILES ]; then
                file="${files[$FILE_INDEX]}"
                
                git add "$file"
                GIT_AUTHOR_DATE="$TIMESTAMP" GIT_COMMITTER_DATE="$TIMESTAMP" git commit --date="$TIMESTAMP" -m "Add $file on $CURRENT_DATE"
                
                echo "[SUCCESS] Placed $file -> $CURRENT_DATE"
                FILE_INDEX=$((FILE_INDEX + 1))
            fi
        done
    done
done
