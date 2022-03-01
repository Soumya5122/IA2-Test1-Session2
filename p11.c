#include<stdio.h>
float input()
{
  float n;
  printf("enter a number\n");
  scanf("%f",&n);
  return n;
}
int multiply(float a,float b,float c,float mul)
{
  
  mul=a*b*c;
  return mul;
}

void output(float a,float b,float c,float *mul)
{
  printf("multiplication of %f%f%f is %f",a,b,c,mul);
}

float main();
{
  float a,b,c,mul;
  input a,b,c;
  a=input();
  b=input();
  c=input();
  mul=multiply(a,b,c);
  output(a,b,c,mul);
  return 0;
  
}
