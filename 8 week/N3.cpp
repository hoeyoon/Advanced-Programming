#include <stdio.h>

int main(){
  char ch;
  int a[2] = {0, };
  while((ch = getchar()) != '\n'){
    if('a' <= ch && ch <= 'z'){
      a[0]++;
    }
    else if('A' <= ch && ch <= 'Z'){
      a[1]++;
    }
  }
  printf("대문자");
  for(int i = 0; i < a[1]; i++){
    putchar('*');
  }
  printf("\n소문자");
  for(int i = 0; i < a[0]; i++){
    putchar('*');
  }
  return 0;
}