#include <stdio.h>

int input_array_size()
{
  int n;
  printf("Enter the length of the array:\n");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}

int is_composite(int n)
{
  for (int i = 1; i <= n; i++)
  
    if (n%i == 0)
  return 0;
}

int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (is_composite(a[i])==0)
    {
      sum =sum + a[i];
    }
  }
  return sum;
}

void output(int sum)
{
  printf("%d\n", sum);
}

int main()
{
  int l = input_array_size();
  int a[l];
  input_array(l, a);
  int res = sum_composite_numbers(l, a);
  output(res);
  return 0;
}