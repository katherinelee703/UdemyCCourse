#include <stdio.h>

int main() 
{
  int thisYear;
  int myAge;
  scanf("%d", &thisYear);
  scanf("%d", &myAge);
  printf("My birth year is: %d\n", thisYear-myAge);
  return 0;
}

