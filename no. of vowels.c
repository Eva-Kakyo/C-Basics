#include <stdio.h>

//program to find number of vowels, consonants and so on.
int main () {
    char time[] = "The time is five pm.";
    int vowels, consonants, marks, otherCharacters;
    vowels=consonants=marks=otherCharacters=0;

    //int length = sizeof(time)/sizeof(time[0]);

    for(int i=0; time[i]!='\0'; i++) {
        time[i]=tolower(time[i]);
        if(time[i]=='a'||time[i]=='e'||time[i]=='i'||time[i]=='o'||time[i]=='u') {
           vowels++;
        } else if(time[i]>='a' &&time[i] <='z') {
           consonants++;
        }else if(time[i]=='.'||time[i]=='?'||time[i]=='!') {
            marks++;
        } else {
            otherCharacters++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of punctuation marks: %d\n", marks);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of other characters: %d\n", otherCharacters);

    return 0;


}
