/*
## 문제 설명
정수형 숫자 N(1~100)을 입력하면 Nx4 배열이 만들어 지고 배열 안의 값을 지그재그로
그리며 정수형으로 출력하는 프로그램을 만들어보자.
배열에 채워지는 숫자는 0부터 시작한다.

## 입력 예시 1
3

## 출력 예시 1
0123
7654
891011

## 입력 예시 2
5

## 출력 예시 2
0123
7654
891011
15141312
16171819
*/

#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int a[n][4];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      a[i][j] = i * 4 + j;
    }
  }
  int b[n][4];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      if(i % 2 == 1){
        b[i][j] = a[i][3 - j];
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      if(i % 2 == 1){
        a[i][j] = b[i][j];
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}