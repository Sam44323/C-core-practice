#include <stdio.h>

int main()
{
  int slices = 15;

  int *p = &slices; // pointer created demo

  printf("Before changing the value of the pointer: %i \n", slices);
  *p = 10;
  printf("After changing the value of the pointer: %i \n", slices);

  return 0;
}