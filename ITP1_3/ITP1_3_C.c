#include<stdio.h>

int main(){
  int n1, n2;
  int temp;

  while(1){
    scanf("%d %d", &n1, &n2);

    if(n1 == 0 && n2 == 0) break;

    if(n1 > n2){
      temp = n1;
      n1 = n2;
      n2 = temp;
    }

    printf("%d %d\n", n1, n2);
  }
  
  return 0;
}
