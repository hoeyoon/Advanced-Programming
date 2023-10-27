/*
# 문제 설명
문자를 입력 받은 후 알파벳 문자의 대문자와 소문자의 등장 횟수를 ‘*’로 나열하는 그래프를 출력하라.
교재 p. 308 문제와 다르게 '\n'이 입력되었을 때 while loop에서 나오게 작성하자.

입력 코딩 예시:
char ch;
while( (ch = getchar()) != '\n') {
  ...
}

# 입출력 예시 1: 입력 "Alphabet Only!"
Alphabet Only!
대문자**
소문자**********

# 입출력 예시 2: 입력 "Java VS C++"
Java VS C++
대문자****
소문자***
*/

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
