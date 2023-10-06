/*
2x3 배열을 1차원 배열에 입력 받아, 출력하는 하는 함수, 2차원 index를 1차원
index로 변환하는 함수, 1차원 index를 받아 2차원 index를 출력하는 함수를
작성하라. 입출력 예시와 main 함수를 참고하라.
모든 index는 0부터 시작한다.
배열은 int matrix[6]만 사용해야 한다.

입출력 예시, 1 2 3 4 5 6을 입력하고 시작한다.
1 2 3
4 5 6

print idx_1
1 2 3 4 5 6

print2x3
1 2 3
4 5 6

print idx_2
(0, 0) (0, 1) (0, 2) (1, 0) (1, 1) (1, 2)


int main(void) {
  int matrix[6];
  //matrix값 입력
  scanf("%d %d %d", matrix + 0, matrix + 1, matrix + 2);
  scanf("%d %d %d", matrix + 3, matrix + 4, matrix + 5);

  printf("\nprint idx_1\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[idx_1(i, j)]);
    }
  }
  printf("\n");

  printf("\nprint2x3\n");
  print2x3(matrix);

  printf("\nprint idx_2\n");
  for (int i = 0; i < 6; i++) {
    idx_2(i);
    printf(" ");
  }
  printf("\n");

  return 0;
}
*/

#include <stdio.h>

int idx_1(int i, int j){
  return i * 3 + j;
}

void print2x3(int m[6]){
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", m[idx_1(i, j)]);
    }
    printf("\n");
  }
}

void idx_2(int i){
  int a = i / 3;
  int b = i % 3;

  printf("(%d, %d)", a, b);  
}

int main(void) {
  int matrix[6];
  //matrix값 입력
  scanf("%d %d %d", matrix + 0, matrix + 1, matrix + 2);
  scanf("%d %d %d", matrix + 3, matrix + 4, matrix + 5);

  printf("\nprint idx_1\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[idx_1(i, j)]);
    }
  }
  printf("\n");

  
  printf("\nprint2x3\n");
  print2x3(matrix);

  printf("\nprint idx_2\n");
  for (int i = 0; i < 6; i++) {
    idx_2(i);
    printf(" ");
  }
  printf("\n");
  
  return 0;
}