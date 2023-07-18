#include<stdio.h>

int createMatrix(int);
int multiplyMatrix(int,int);

int main(){
  int n,matrix[100][100];
  printf("ENter size of square matrix");
  scanf("%d",&n);

  

  //multiplication
  
  
  
  
}

int createMatrix(n){
  int matrix[100][100];
    for (int i =0; i<n;i++) //rows
    {
      for (int j =0;j<n;j++) //column
      {
        printf("Ennter element of matrix : ");
        scanf("%d",&matrix[i][j]);
      }
    
    }
  return matrix;
}

int multiplyMatrix