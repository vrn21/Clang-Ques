#include <stdio.h>

int main() {
  int array[20], i = 0, j = 0, n = 0, target;
  printf("Enter size of array: ");
  scanf("%d", &n);

  // entering elements into an array
  while (i < n) {
    printf("Enter elements of the array: ");
    scanf("%d", &array[i]);
    i++;
  }

  printf("Enter no to search for: ");
  scanf("%d", &target);
  for (int j = 0; j < n; j++) {
    if (array[j] == target) {
      printf("The element found at index %d ", j);
      break;
    }
  }
}
