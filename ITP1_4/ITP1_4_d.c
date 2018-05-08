#include<stdio.h>

int main(){
  int n;
  int min = 1000000, max = -1000000;
  long sum = 0;
  int i;
  
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    int temp;
    scanf("%d", &temp);
    if(temp < min){
      min = temp;
    }
    if(temp > max){
      max = temp;
    }
    sum += temp;
  }

  printf("%d %d %ld\n", min, max, sum);

  return 0;
}
