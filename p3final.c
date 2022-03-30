#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=1;i<=n;i++)
    
      if(n%i == 0)

  return 0;
}
void output(int n,int is_composite)
{
  if(is_composite==0)
  printf("%d is a composite number",n);
  else
    printf("%d is not a composite number",n);
}
int main()
{
  int n,a;
  n=input_side();
  a=is_composite(n);
  output(n,a);
  return 0;
}