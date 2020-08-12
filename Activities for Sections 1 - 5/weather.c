#include <stdio.h>

int main()
{
  double cels;
  double fahr;
  printf("enter current temp in Celsius: ");
  scanf("%lf", &cels);
  fahr = (cels * 1.8) + 32;
  printf("current temp in Fahrenheit is: %lf\n", fahr);

  printf("enter current temp in Fahrenheit: ");
  scanf("%lf", &fahr);
  cels = (fahr - 32)/1.8;
  printf("current temp in Celsius is: %lf\n", cels);
  return 0;
}
