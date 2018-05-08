#include<stdio.h>
#include<math.h>

int main(){
  double r;
  scanf("%lf", &r);

  printf("%.6lf %.6lf\n", M_PI * r * r, M_PI * 2 * r);

  return 0;
}
