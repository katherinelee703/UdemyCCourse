#include <stdio.h>

int main()
{
  double h, w, area;
  printf("enter height: ");
  scanf("%lf", &h);
  printf("enter width: ");
  scanf("%lf", &w);
  area = h * w;
  printf("rectangle's area is %.2lf\n", area);
  return 0;
}
