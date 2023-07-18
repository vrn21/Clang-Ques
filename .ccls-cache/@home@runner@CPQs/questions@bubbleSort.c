#include <stdio.h>

int main() {
  int array[20], i = 0, j = 0, n = 0, temp;
  printf("Enter size of array: ");
  scanf("%d", &n);

  // entering elements into an array
  while (i < n) {
    printf("Enter elements of the array: ");
    scanf("%d", &array[i]);
    i++;
  }

  // sorting
  for (int k = 0; k < n - 1; k++) {
    for (int l = 0; l < n - k - 1; l++) {
      if (array[l] > array[l + 1]) {
        temp = array[l];
        array[l] = array[l + 1];
        array[l + 1] = temp;
      }
    }
  }

  printf("The sorted array is : ");
  for (int m = 0; m < n; m++) {
printf(%d", array[m]);
  }
}