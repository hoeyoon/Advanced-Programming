/*
## 문제 설명
세 개의 정수를 입력으로 받아 이 수들을 가장 큰 수부터 순서대로 출력하는
프로그램을 작성하라.

## 입력 예시
4
9
3

## 출력 예시
9 4 3
*/

#include <stdio.h>

int main(){
  int x[3];
  for(int i = 0; i < 3; i++){
    scanf("%d", &x[i]);
  }  
  int temp = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(x[i] > x[j]){
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }
  for(int i = 0; i < 3; i++){
    printf("%d ", x[i]);
  }
  return 0;
}
