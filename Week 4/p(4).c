#include<stdio.h>
#include<stdlib.h>
void Repeating(int arr[10])
{
  int i, j;
  printf("\nThe Repeating elements are ");
  for(i = 0; i <9; i++)
  {
    for(j = i+1; j<10; j++)
    {
      if(arr[i] == arr[j])
      {
          printf("%d ", arr[i]);
      }
    }
  }
}

int main()
{
  int arr[10];
  int i,j;
  printf("Enter the 10 elements\n");
  for(i=0; i<10; i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0; i<10; i++)
  {
      printf("%d ",arr[i]);
  }
  Repeating(arr);
  return 0;
}
