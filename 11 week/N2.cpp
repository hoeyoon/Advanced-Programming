/*
## 문제 설명
공백을 포함하는 문자열을 입력받아 짝수 번째에 있는 문자를 삭제하는 코드를 작성하시오.
문자열의 길이는 최대 100개로 제한한다.

## 입력 예시 1
SuPpEr55

## 출력 예시 1
SPE5

## 입력 예시 2
How are you Doing

## 출력 예시 2
HwaeyuDig

## 입력 예시 3
sQuID GaMe

## 출력 예시 3
suDGM
*/

#include <stdio.h>
#include <string.h>

void print_str(char *str){
  int i = 0;
  while(*str != '\0'){
    if(i % 2 == 0){
      printf("%c", *str);
    }
    i++;
    str++;
  }
}

int main(){
  char str[100];
  scanf("%[^\n]s", str);
  print_str(str);
  return 0;
}
