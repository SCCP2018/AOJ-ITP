#include<stdio.h>

int main(){
  int a, b;
  char op;
  int res;

  while(1){
    scanf("%d %c %d", &a, &op, &b);

    if(op == '?') break;

    if(op == '+'){
      res = a + b;
    }
    else if(op == '-'){
      res = a - b;
    }
    else if(op == '*'){
      res = a * b;
    }
    else if(op == '/'){
      res = a / b;
    }

    printf("%d\n", res);
  }
  
  return 0;
}
