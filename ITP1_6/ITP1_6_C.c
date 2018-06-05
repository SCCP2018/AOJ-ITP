#include<stdio.h>

int main(){
  int n;
  int i, j, k;
  int b, f, r, v;
  int arr[4][3][10];

  // array initialization
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      for(k = 0; k < 10; k++){
	arr[i][j][k] = 0;
      }
    }
  }

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d %d %d %d", &b, &f, &r, &v);
    arr[b - 1][f - 1][r - 1] += v;
  }

  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      for(k = 0; k < 10; k++){
	printf(" %d", arr[i][j][k]);
      }
      printf("\n");
    }
    if(i != 3){
      printf("####################\n");
    }
  }

  return 0;
}
