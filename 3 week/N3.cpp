#include <stdio.h>

int main(){
  int a, b;
  char c;

  scanf("%c %d %d", &c, &a, &b);

  if(c == '+'){
    printf("%d\n", a + b);
  }
  else if(c == '-'){
    printf("%d\n", a - b);
  }
  else if(c == '*'){
    printf("%d\n", a * b);
  }
  else if(c == '/'){
    printf("%d", a / b);
  }
  else if(c == '%'){
    printf("%d\n", a % b);
  }
  return 0;
}
