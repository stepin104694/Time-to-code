#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int (*ptr[2])(int x,int y);

int main()
{
  int result;
  int n1=20,n2=2;
  int choice = 0;

  ptr[0] = add; //address of add function
  ptr[1] = sub; //address of sub function

  result = ptr[choice](n1,n2);
  printf("%d",result);
}

int add(int a,int b){
  return a+b;
}
int sub(int a, int b)
{
  return a-b;
}
