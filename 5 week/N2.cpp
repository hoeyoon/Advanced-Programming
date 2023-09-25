/*
## 문제 설명 
정수 N(1~10)을 입력하면 Nx5 크기가 만들어지는 정수형 배열 a를 선언한다.
이후 배열 a에 Nx5개 정수를 입력한 후, 1차원 배열 b에 배열 a의 모든 값이 큰 수부터
정렬되도록 만드는 프로그램을 작성해 보자.

## 입력 예시 (2x5 배열 생성)
2
1 3 5 7 9 2 4 6 8 10

## 출력 예시 
10 9 8 7 6 5 4 3 2 1
*/

#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int a[n][5];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 5; j++){
      scanf("%d", &a[i][j]);
    }
  }
  int b[50];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 5; j++){
      b[i * 5 + j] = a[i][j];
    }
  }
  int temp = 0;
  for(int i = 0; i < n * 5; i++){
    for(int j = 0 ; j < n * 5; j++){
      if(b[i] > b[j]){
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
      }
    }
  }
  for(int i = 0; i < n * 5; i++){
    printf("%d ", b[i]);
  }
  return 0;
}