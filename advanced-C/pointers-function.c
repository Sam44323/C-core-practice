#include <stdio.h>

int doubleValue(int x)
{
  return x * 2;
}

int main()
{
  int x = 10;
  int *p = &x;
  *p = doubleValue(*p);
  printf("Initial Value: %i \nDoubled value: %i \n", 10, *p);
}