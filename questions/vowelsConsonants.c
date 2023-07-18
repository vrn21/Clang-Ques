#include <stdio.h>

int main() {
  int i = 0, countVowel = 0, countConsonant = 0;
  char word[100];
  printf("Enter word: ");
  scanf("%s", word);

  while (word[i] != '\0') {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
        word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
      countVowel++;
    } else {
      countConsonant++;
    }
    i++;
  }

  printf("Vowels: %d Consonants: %d\n", countVowel, countConsonant);

  return 0;
}
