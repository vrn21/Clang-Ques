#include <stdio.h>

int main() {
  char string1[100], string2[100];
  int n = 0, i = 0, k = 0, counter = 0,j;
  
  printf("Enter string: ");
  scanf("%s",&string1);
  
  // Calculate the length of the input string
  while (string1[i] != '\0') {
    n++;
    i++;
  }
  
  printf("Length of the string: %d\n", n);

  // Reverse the string
  for (j = n - 1; j >= 0; j--) {
    string2[k] = string1[j];
    k++;
  }
  string2[k] = '\0'; // Add null-terminating character

  printf("Reversed string: %s\n", string2);

  // Check if the original and reversed strings are the same (palindrome check)
  for (k = 0; k < n; k++) {
    if (string2[k] != string1[k]) {
      printf("Not a palindrome\n");
      break;
    } else {
      counter++;
    }
  }

  if (counter == n) {
    printf("It is a palindrome\n");
  }

  return 0;
}
