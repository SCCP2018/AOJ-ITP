#include<stdio.h>

int main(){
  int a, b;
  char op;

  while(1){
    int res;
    scanf("%d %c %d", &a, &op, &b);

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
    else if(op == '?'){
      break;
    }

    printf("%d\n", res);
  }
  
  return 0;
}

