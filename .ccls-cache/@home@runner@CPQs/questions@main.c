#include <stdio.h>

int main(void) {
  int array[20], i = 0, j = 0, digit, n, frequency = 0;
  printf("Enter size of array: ");
  scanf("%d", &n);

  // entering elements to array
  while (i < n) {
    printf("Enter elements of the array: ");
    scanf("%d", &array[i]);
    i++;
  }
  // searching for an element
  printf("Enter element to search for: ");
  scanf("%d", &digit);
  i = 0;
  while (i < n) {
    if (array[i] == digit) {
      frequency++;
    }
  printf("The number %d occured %d times ", digit, frequency);
  }

  return 0;
}