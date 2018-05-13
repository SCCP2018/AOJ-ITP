#include<stdio.h>
#include<math.h>

int main(){
  double r;
  scanf("%lf", &r);

  printf("%lf %lf", M_PI * r * r, 2 * M_PI * r);
  return 0;
}
