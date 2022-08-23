#include <stdio.h>

//program to find whether a letter is a vowel or consonant.
int main () {
    char letter;

    printf("Type in a letter.\n");
    scanf("%c", &letter);

    int lowercasevowels, uppercasevowels;
    //a,e,i,o,u
    lowercasevowels =(letter== 'a'||letter=='e'||letter=='i'||letter=='o'||letter=='u');
    uppercasevowels =(letter== 'A'||letter=='E'||letter=='I'||letter=='O'||letter=='U');

    if(lowercasevowels||uppercasevowels) {
        printf("Letter is a vowel.");
    } else {
        printf("Letter is a consonant");
    }

    return 0;
}
