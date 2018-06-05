#include<stdio.h>

int main(){
  int n, m;
  int arr1[100][100];
  int arr2[100];
  int i, j;
  int input;
  int res[100];
  int sum;
  
  // input
  scanf("%d %d", &n, &m);
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d", &input);
      arr1[i][j] = input;
    }
  }

  for(i = 0; i < m; i++){
    scanf("%d", &input);
    arr2[i] = input;
  }

  // calculation
  for(i = 0; i < n; i++){
    sum = 0;
    for(j = 0; j < m; j++){
      sum += arr1[i][j] * arr2[j];
    }
    res[i] = sum;
  }

  // output result
  for(i = 0; i < n; i++){
    printf("%d\n", res[i]);
  }
  
  return 0;
}
