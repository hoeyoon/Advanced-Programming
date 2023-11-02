/*
## 문제 설명 
입력 받은 1개의 문자열 내의 공백을 삭제하는 프로그램을 작성하라.
- 입력으로 주어지는 문자열의 최대 길이는 127개의 알파벳 문자열
- (주의) 공백을 포함하는 문자열이 입력으로 주어짐
- 입력으로 주어지는 문자열의 시작과 끝에 공백 문자가 주어질 수 있음.

## 입력 예시 1
A B C

## 출력 예시 1
ABC

## 입력 예시 2 (==> 주의 해야 할 예시)
Hello World!

## 출력 예시 2
HelloWorld!

## 입력 예시 3 (==> 주의 해야 할 예시)
    1 2 3

## 출력 예시 3
123
*/

#include <stdio.h>
#include <string.h>

int main(){
  char str[128];
  scanf("%[^\n]s", str);
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    if(str[i] == ' '){
      continue;
    }
    else{
      printf("%c", str[i]);
    }
  }
  return 0;
}