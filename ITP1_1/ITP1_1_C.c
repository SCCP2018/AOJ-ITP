#include<stdio.h>

int main(){
  int width, height;
  scanf("%d %d", &width, &height);
  printf("%d %d\n", width * height, 2 * width + 2 * height);
  
  return 0;
}
