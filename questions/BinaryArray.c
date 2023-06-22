#include <stdio.h>

// this is a prgm that converts number to binary using arrays.

int main() {
  int array[100], n, i = 0;
  printf("Enter number to convert: ");
  scanf("%d", &n);
  while (n != 1) {
    array[i] = n % 2;
    n = n / 2;
    i++;
  }
  if (n == 1) {
    array[i] = 1;
  }
  printf("The number in binary is : \n");
  while (i != 0) {
    printf("%d", array[i]);
    i--;
  }
}