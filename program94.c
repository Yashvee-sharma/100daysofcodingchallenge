// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char sentence[] = "I love programming";
    
    int current_len = 0;
    int max_len = 0;
    int max_start_idx = 0;
    int current_start_idx = 0;
    
    int i = 0;
    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (current_len > max_len) {
                max_len = current_len;
                max_start_idx = current_start_idx;
            }
            if (sentence[i] == '\0') {
                break;
            }
            current_len = 0;
            current_start_idx = i + 1;
        } else {
            current_len++;
        }
        i++;
    }
    for (int j = max_start_idx; j < max_start_idx + max_len; j++) {
        printf("%c", sentence[j]);
    }
    printf("\n");

    return 0;
}
