#include <stdio.h>

//program to find frequency of characters in a string.
int main () {
    char sentence[1000];
    char letter;
    int freq = 0;

    printf("Enter a sentence.\n");
    scanf("%s", &sentence);
    printf("Enter a letter.\n");
    scanf("%c", &letter);

    int length = sizeof(sentence)/sizeof(sentence[0]);

    for(int i=0; i<length; i++) {
        if(sentence[i]==letter) {
           freq+=1;
        }
    }
    printf("%d", freq);

    return 0;


}

