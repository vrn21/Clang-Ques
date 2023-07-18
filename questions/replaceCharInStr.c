#include <stdio.h>

int main() {
    int i = 0;
    char word[100], replace, toReplace;
    
    // Input word
    printf("Enter word: ");
    scanf("%99s", word);
    
    // Input character to be replaced
    printf("Enter char to be replaced in the word: ");
    scanf(" %c", &toReplace);
    
    // Input replacement character
    printf("Enter char to replace in the word: ");
    scanf(" %c", &replace);
    
    // Replace the character in the word
    while (word[i] != '\0') {
        if (word[i] == toReplace) {
            word[i] = replace;
        }
        i++;
    }

    // Print the final string
    printf("The final string is: %s\n", word);

    return 0;
}
