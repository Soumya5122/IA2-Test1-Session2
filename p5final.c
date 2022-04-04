#include <stdio.h>

int input()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  return num;
}

// Using Euclidean algorithm
int gcd(int a, int b)
{
  int s, gcd,i;
  if(a<b)
    s=a;
  else
    s=b;
  for(i=1;i<=s;i++)
    {
      if(a%i==0 && b%i==0)
        gcd=i;
    }
    return gcd;
}

void output(int a, int b, int gcd)
{
  printf("The gcd of %d and %d is %d\n", a, b, gcd);
}

int main()
{
  int num1 = input();
  int num2 = input();
  int res = gcd(num1, num2);
  output(num1, num2, res);
  return 0;
}