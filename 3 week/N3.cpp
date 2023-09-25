/*
## 문제 설명
1개의 문자와 2개의 정수로 이루어진 한 줄을 입력으로 받아 해당 문자의
연산(+, -, *, /, %)을 2개의 정수에 적용한 결과를 출력하라.
단, 나눗셈의 경우는 정수 부분만 출력한다.

## 입력 예시 1
+ 100 200 

## 출력 예시 1
300

## 입력 예시 2
- 100 200 

## 출력 예시 2
-100

## 입력 예시 3
% 100 200 

## 출력 예시 3
100
*/

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
