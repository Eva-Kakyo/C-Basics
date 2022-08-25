#include <stdio.h>

//program to allow user input for strings
int main() {
    char sentence[1000];

    printf("Enter a sentence.\n");
    fgets(sentence, sizeof(sentence), stdin);
    puts(sentence);

    return 0;

}
