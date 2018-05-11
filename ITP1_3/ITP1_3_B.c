#include<stdio.h>

int main(){
  int n;
  int i;
 
  for(i = 0 ; i < 10000; i++){
    scanf("%d", &n);
    if(n == 0) break;

    printf("Case %d: %d\n", i+1, n);
  }

  return 0;
}
