// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "John David Doe";
    int length = strlen(name);
    int last_space_idx = -1;
    for (int i = length - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space_idx = i;
            break;
        }
    }
    if (length > 0 && name[0] != ' ') {
        printf("%c.", name[0]);
    }

    for (int i = 1; i < last_space_idx; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }
    if (last_space_idx != -1) {
        printf(" %s\n", &name[last_space_idx + 1]);
    } else {
        printf("\n"); 
    }

    return 0;
}
