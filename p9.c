#include<stdio.h>
int input()
{
  int a,b,c,d; 
  printf("enter a four numbers\n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  return 0;
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
