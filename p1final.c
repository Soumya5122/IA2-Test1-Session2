#include<stdio.h>

void input(float *base,float *height)
{
  printf("enter the base\n");
  scanf("%f",base);
  printf("enter the height\n");
  scanf("%f",height);
  return;
}
void find_area(float base,float height,float *area)
{
  *area=(base*height)/2;
  return;
}

void output(float base,float height,float area)
{
  printf("%f %f is %f\n",base,height,area);
  return;
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}