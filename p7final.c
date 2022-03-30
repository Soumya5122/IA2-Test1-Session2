#include <stdio.h>

typedef struct _triangle
{
  float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
  Triangle A;
  printf("Enter the base, altitude of a triangle:\n");
  scanf("%f%f", &A.base, &A.altitude);
  return A;
}

void find_area(Triangle t)
{
  t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t)
{
  printf("The area of triangle with base = %f and altitude = %f is %f\n", t.base, t.altitude, t.area);
}

int main()
{
  Triangle A = input_triangle();
  find_area(&A);
  output(A);
  return 0;
}
