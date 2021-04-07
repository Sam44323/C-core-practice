#include <stdio.h>

void showRemarks(char grade)
{
  switch (grade)
  {
  case 'A':
    printf("You just aced the test\n");
    break;
  case 'B':
    printf("You did good, ace it next time!\n");
    break;
  case 'C':
    printf("Neither too good, nor to bad. But, you should work harder!\n");
    break;
  case 'D':
    printf("You just barely passed.Study more!\n");
    break;
  case 'E':
    printf("You got barely saved from getting the last rank!\n");
    break;
  case 'F':
    printf("So! last. Just study rigorously and do better.\n");
    break;
  default:
    printf("Show your grades to MUSK cause he deals with martians\n");
  }
}

int main()
{
  char grade;
  printf("Please enter your grade!: \n");
  scanf("%c", &grade);
  showRemarks(grade);
  return 0;
}