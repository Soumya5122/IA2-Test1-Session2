#include<stdio.h>


void input(float *base,float *height)
{
  printf("enter base and height value\n");
  scanf("%f%f",base,height);
}

void find_area(float base,float height ,float *area)
{
 *area=(base*height)/2; 
}

void output(float base,float height ,float area)
{
  printf("the area of triangle %f and %f is %f",base,height,area);
}

int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}