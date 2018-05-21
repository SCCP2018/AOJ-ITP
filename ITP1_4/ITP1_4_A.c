#include<stdio.h>

int main(){
  int d, r;
  
  scanf("%d %d", &d, &r);

  printf("%d %d %lf\n", d/r, d%r, (double)d/r);
  return 0;
}
