// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "I love coding";
    int length = strlen(sentence);
    int word_start = 0;

    for (int i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            int word_end = i - 1;
            while (word_start < word_end) {
                char temp = sentence[word_start];
                sentence[word_start] = sentence[word_end];
                sentence[word_end] = temp;
                
                word_start++;
                word_end--;
            }
            word_start = i + 1;
        }
    }
    printf("%s\n", sentence);

    return 0;
}
