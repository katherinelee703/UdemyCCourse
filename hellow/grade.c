#include <stdio.h>

int main() 
{
  int grade1;
  int grade2;
  int  grade3;
  double average;
  printf("enter grade 1: ");
  scanf("%d", &grade1);
  printf("enter grade 2: ");
  scanf("%d", &grade2);
  printf("enter grade 3: ");
  scanf("%d", &grade3);
  average = (grade1+grade2+(double)grade3)/3;
  printf("Average of the 3 grades is: %.2lf\n", average);
  return 0;
}

