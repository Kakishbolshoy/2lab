#include <stdio.h>
#include <math.h>

int main()
{
  double x, y, h;
  x = 0.0;
  scanf("%lf", &h);
  int a, b;
  b=0
  a = 2 / h;
  while b<=a
  { b+=1
    if (x >= 0 && x <= 1.5)
      y = pow(2,x) - 2 + pow(x,2);  
    if (x > 1.5 && x <= 3)
      y = sqrt(x) * exp(-1* pow(x, 2)); 
    printf("%lf %lf\n", x, y);
    x += h; 
  }
}