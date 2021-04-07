#include <stdio.h>
#include <math.h>

void displayMessage(char name[])
{
  printf("What's up %s \n", name);
}

int main()
{
  char name[30];
  printf("Enter your name: \n");
  scanf("%s", name);
  displayMessage(name);
}