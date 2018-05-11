#include<stdio.h>

int main(){
  int a, b;
  int temp;
  int i;

  for(i = 0; i < 10000; i++){
    scanf("%d %d", &a, &b);

    if(a == 0 && b == 0) break;

    if(a > b){
      temp = a;
      a = b;
      b = temp;
    }

    printf("%d %d\n", a , b);
  }

  return 0;
}
