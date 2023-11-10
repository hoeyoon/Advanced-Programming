/*
## 문제 설명
공백을 포함하는 문자열을 입력받아 대문자는 소문자로, 소문자는 대문자로 출력하는 코드를 작성하시오.
문자열의 길이는 최대 100개로 제한한다.

## 입력 예시 1
SuPpEr55

## 출력 예시 1
sUpPeR55

## 입력 예시 2
How are you Doing

## 출력 예시 2
hOW ARE YOU dOING

## 입력 예시 3
sQuID GaMe

## 출력 예시 3
SqUid gAmE
*/
#include <stdio.h>
#include <string.h>

void change_str(char *str){
  while(*str != '\0'){
    if('a' <= *str && *str <= 'z'){
      *str = *str - 'a' + 'A';
    }
    else if('A' <= *str && *str <= 'Z'){
      *str = *str - 'A' + 'a';
    }
    str++;
  }
}

int main(){
  char str[100];
  scanf("%[^\n]s", str);
  getchar();
  change_str(str);
  printf("%s\n", str);
  return 0;
}
