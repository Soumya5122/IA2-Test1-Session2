#include <stdio.h>

void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%s", a);
}

void str_reverse(char str, char rev_str)
{
  int n;
  for (n = 0; str[n]; n++);
  n--;
  int i;
  for (i = 0; str[i]; i++)
  {
    rev_str[i] = str[n];
    n--;
  }
  rev_str[i] = '\0';
}

void output(char a, char reverse_a)
{
  printf("The reverse of %s is %s\n", a, reverse_a);
}
int main()
{
  char str[10];
  input_string(str);
  char rev_str[10];
  str_reverse(str, rev_str);
  output(str, rev_str);
  return 0;
}

