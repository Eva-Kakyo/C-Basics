#include <stdio.h>

//program to find frequency of characters in a string.
int main () {
    char sentence[1000];
    char letter;
    int freq = 0;

    printf("Enter a sentence.\n");
    fgets(sentence, sizeof(sentence), stdin);
    //puts(sentence);

    printf("Enter a letter.\n");
    scanf("%c", &letter);


    //int length = sizeof(sentence)/sizeof(sentence[0]);
    //printf("%d", length);

    for(int i=0; sentence[i]!='\0'; i++) {
        if(sentence[i]==letter) {
           freq++;
        }
    }
    printf("%d", freq);

    return 0;


}

