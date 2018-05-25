#include<stdio.h>

int main(){
  int i, j;
  int h, w;

  while(1){
    scanf("%d %d", &h, &w);

    if(h == 0 && w == 0) break;
  
    for(i = 0; i < h; i++){
      for(j = 0; j < w; j++){
	if(i == 0 || i == h - 1 || j == 0 || j == w - 1){
	  printf("#");
	}
	else{
	  printf(".");
	}
      }
      printf("\n");
    }
    printf("\n");
  }
  
  return 0;
}
