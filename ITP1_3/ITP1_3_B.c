#include<stdio.h>

int main(){
  int n;
  int i = 1;

  while(1){
    scanf("%d", &n);

    if(n == 0) break;
    
    printf("Case %d: %d\n", i, n);
    i++;
  }

  return 0;
}
