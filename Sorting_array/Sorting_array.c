
#include<stdio.h>
#include<stdlib.h>
int arraysort(int arr[],int n);
int main()
{
  int n=5;
  int *array;
  array = (int *)malloc(n*sizeof(int));
  memcpy(array, (int []){2,8,1,25,18}, n * sizeof array[0]);
  arraysort(array,n);
  for(int i=0;i<5;i++)
  {
    printf("%d\n",array[i]);
  }
  free(array);
  return 0;
}

int arraysort(int arr[],int n)
{
  int temp;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i]<arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  return 0;
}
