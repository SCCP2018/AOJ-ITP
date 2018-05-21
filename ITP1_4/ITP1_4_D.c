#include<stdio.h>
#include<limits.h>

int main(){
  int n;
  int i;
  long max = LONG_MIN;
  long min = LONG_MAX;
  long sum = 0;
  int num;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &num);

    if(num < min){
      min = num;
    }

    if(num > max){
      max = num;
    }

    sum += num;
  }

  printf("%ld %ld %ld\n", min, max, sum);

  return 0;
}
