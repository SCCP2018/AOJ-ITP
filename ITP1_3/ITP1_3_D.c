#include<stdio.h>

int main(){
  int from, to, target;
  int i;
  int cnt = 0;
  
  scanf("%d %d %d", &from, &to, &target);

  for(i = from; i <= to; i++){
    if(target % i == 0){
      cnt++;
    }
  }

  printf("%d\n", cnt);
  return 0;
}
