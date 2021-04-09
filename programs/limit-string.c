#include <stdio.h>

int main()
{
  char name[10];
  printf("Please enter your name!: \n");
  scanf("%9s", name);
  printf("Hello %s \n", name);
}