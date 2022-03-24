#include<stdio.h>
int input_side(int a,int b,int c)
{
  
  printf("enter the sides of the triangle :\n");
  scanf("%d%d%d",&a,&b,&c);
}

int check_scalence(int a,int b,int c)
{
  
  if (a!=b && a!=c);
  
  
  else if (b!=a && b!=c);
  
  
  if (c);
   
     return a;
   
}

void output(int a,int b,int c,int scalence)
{
  printf("among of these any sides are not egual to eachother\n",a,b,c,scalence);
}

int main()
{
  int a,b,c,scalence;
  input_side(a,b,c);
   check_scalence (a,b,c);
  output(a,b,c,scalence);
  return 0;
}