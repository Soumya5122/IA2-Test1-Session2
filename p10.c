#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}

int division(int a,int b)
{
  int divide;
  divide=a/b;
  return divide;
}

void output(int a,int b,int divide)
{
  printf("division of %d %d is %d",a, b,divide);
}

int main()
{
  int a,b,divide;
  input(a,b);
  a=input();
  b=input();
  divide=division(a,b);
  output(a,b,divide);
  return 0;
}