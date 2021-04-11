#include <stdio.h>

int main()
{
  int slices = 15;

  // creating a pointer
  int *p = &slices;

  printf("Before changing the value of the pointer: %i \n", slices);
  *p = 10;
  printf("After changing the value of the pointer: %i \n", slices);

  return 0;
}