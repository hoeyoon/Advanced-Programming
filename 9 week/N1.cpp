/*
## 문제 설명 

- "$END$" 를 읽어 들인 시점에서 문자열 읽기를 중단할 것
- "$END$" 보다 앞서 입력한 모든 문자열을 출력할 것
- 입력으로 주어지는 문자열의 최대 길이는 127개의 알파벳 문자열
- 입력으로 주어지는 문자열의 개수는 최대 10개

## 입력 예시 1
ABC
Book
Test
$END$

## 출력 예시 1
ABC
Book
Test
*/

#include <stdio.h>
#include <string.h>

int main(){
  char str[128];
  for(int i = 0; i < 10; i++){
    scanf("%s", str);
    if(strstr(str, "$END$")){
      break;
    }
    printf("%s\n", str);
  }
  return 0;
}

// 또는

#include <stdio.h>
#include <string.h>

int main(){
  char str[10][128];
  int count = 0;
  for(int i = 0; i < 10; i++){
    scanf("%s", str[i]);
    if(strstr(str[i], "$END$")){
      break;
    }
    count++;
  }
  for(int i = 0; i < count; i++){
    printf("%s\n", str[i]);
  }
  return 0;
}
