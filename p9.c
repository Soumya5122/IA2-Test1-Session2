#include<stdio.h>
int input()
{
   int n;
  printf("enter a  number\n");
  scanf("%d",&n);
  return n;
}

int add(int a,int b,int c,int d)
{
  int sum;
  sum=a+b+c+d;
  return sum ;
}

void output(int a,int b,int c,int d,int sum)
{
  printf("add four numbers %d%d%d%d is %d",a,b,c,d,sum);
}

int main()
{
  int a,b,c,d,sum;
  a= input();
  b= input();
  c= input();
  d= input();
  sum=add(a,b,c,d);
  output(a,b,c,d,sum);
  return 0;
}
