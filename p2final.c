#include<stdio.h>
int input_side(int *a,int *b,int *c)
{
  
  printf("enter the sides of the triangle :\n");
  scanf("%d%d%d",a,b,c);
}

int check_scalence(int a,int b,int c)
{
  
  if (a!=b && a!=c);
  
  
  else if (b!=a && b!=c);
  
  
  if (c);
   
     return a;
   
}

void output(int a,int b,int c,int *scalence)
{
  printf("%d,%d,%d is %d\n",a,b,c,scalence);
}

int main()
{
  int a,b,c;
  input_side(&a,&b,&c);
  int res= check_scalence (a,b,c);
  output(a,b,c,&res);
  return 0;
}