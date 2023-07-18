#include <stdio.h>

int main()
{
  //we need an array
  //we input the numbers and store in the array
  //now we sort using bubble sort algorithm
  /*bubble sort algorithm:
  we compare two elements adjacent to each other and 
  check if first one is greater than the other, if true then we swap the position of the two elements and continue the process for each element
  here the issue is that the process could go all the way to the end and yet the array may not be sorted. but what we do know is that at the end of the loop, the highest number is at the back and hence we can repeat the loop but for n-1 and repeat the process until n has become 1*/
  int numbers[100],N,i,j,k;
  printf("Enter the number of integers: ");
  scanf("%d",&N);
  printf("Enter the numbers:\n");
  for(i=0;i<N;i++)
    {
      scanf("%d\n",&numbers[i]);
    }
  
}