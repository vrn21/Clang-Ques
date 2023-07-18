#include <stdio.h>

int multiplyMatrix(int A[][SIZE], int B[][SIZE]) {
  int pdtsum = 0, i, j, k, result[][SIZE];
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      result[i][j] = 0;
      for (k = 0; k < SIZE; k++) {
        result[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return result;
}

int createMatrix(int n) {
  int matrix[100][100];
  for (int i = 0; i < n; i++) // rows
  {
    for (int j = 0; j < n; j++) // column
    {
      printf("Ennter element of matrix : ");
      scanf("%d", &matrix[i][j]);
    }
  }
  return matrix;

  int areMatricesEqual(int A[][SIZE], int B[][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
        if (A[i][j] != B[i][j]) {
          return 0;
        }
      }
    }

    return 1;
  }

  int main() {
    int n, matrix[100][100], product1, product2, mat1[][100], mat2[][100],flag;
    printf("ENter size of square matrix");
    scanf("%d", &n);
    mat1 = createMatrix(n);
    printf("ENter second matrix");
    mat2 = createMatrix(n);
    product1 = multiplyMatrix(mat1[][n], mat2[][n]);
    product2 = multiplyMatrix(mat2, mat1);
    flag = areMatricesEqual(product1, product2);
    if (flag == 1) {
      printf("They are equal");
    } else {
      printf("THey are not");
    }
  }
}
