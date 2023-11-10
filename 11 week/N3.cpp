/*
공백을 포함하지 않는 문자열과 특정 문자를 입력받아 특정 문자 이전의 문자를 출력하는 코드를 작성하시오.
문자열의 길이는 최대 100개로 제한하며, 문자가 포함되지 않았을 때는 ‘NO.’를 출력한다.

int main(){
  if(  == NULL)
    printf("NO.");
  else
    printf("이전문자는 %s입니다.", p);
}

## 입력 예시 1
STRING I

## 출력 예시 1
이전문자는 STRI입니다.

## 입력 예시 2
Halloween o

## 출력 예시 2
이전문자는 Hallo입니다.

## 입력 예시 3
Pororo O

## 출력 예시 3
NO.
*/

#include <stdio.h>
#include <string.h>

void check_str(char* str, char ch){
  while(*str != ch){
    str++;
  }
  *(str + 1) = '\0';
}

int main(){
  char str[100], ch;
  scanf("%s", str);
  
  scanf(" %c", &ch);

  if(strchr(str, ch) == NULL){
    printf("NO.\n");
  }
  else{
    check_str(str, ch);
    printf("이전문자는 %s입니다.\n", str);
  }
  return 0;
}
