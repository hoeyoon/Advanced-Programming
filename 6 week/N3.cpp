/*
요소의 수가 512이하의 2차원 배열을 int matrix[512]에 입력하는 함수, 출력하는 함수, 
그리고 같은 값을 가지는 요소의 2차원 index를 출력하는 함수를 작성하라.

//입출력 예시 1: 2 4, 1 2 3 4 2 3 4 5 입력함.
matrix shape: 2 4
1 2 3 4
2 3 4 5
----------
1 2 3 4 
2 3 4 5 
----------
value 2 is found at (0, 1) (1, 0) 

입출력 예시 2: 3 3, 1 4 5 2 7 4 4 5 8 입력함.
matrix shape: 3 3
1 4 5
2 7 4
4 5 8
----------
1 4 5 
2 7 4 
4 5 8 
----------
value 4 is found at (0, 1) (1, 2) (2, 0) 


//코드 작성

int main(void) {
  int r,c;
  int matrix[512]; //matrix 아닌 다른 배열은 사용하지 못한다.
  printf("matrix shape: ");
  scanf("%d %d", &r, &c);

  scan_matrix(matrix, r, c);// matrix 요소 값을 입력 받는 함수.
  
  printf("----------\n");
  
  print_matrix(matrix,r, c);

  printf("----------\n");
  find_2D(matrix, r, c, matrix[1]);//matrix[i] 요소 값을 가진 모든 요소의 2차원 index 출력.
  return 0;
}
*/

#include <stdio.h>

void scan_matrix(int m[], int r, int c){
  for(int i = 0; i < r * c; i++){
    scanf("%d", &m[i]);
  }
}

void print_matrix(int m[], int r, int c){
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      printf("%d ", m[i * c + j]);
    }
    printf("\n");
  }
}

void find_2D(int m[], int r, int c, int v){
  printf("value %d is found at ", v);
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      if(m[i * c + j] == v){
        printf("(%d, %d) ", i, j);
      }
    }
  }
}

int main(void) {
  int r,c;
  int matrix[512]; //matrix 아닌 다른 배열은 사용하지 못한다.
  printf("matrix shape: ");
  scanf("%d %d", &r, &c);

  scan_matrix(matrix, r, c); // matrix 요소 값을 입력 받는 함수.

  printf("----------\n");
  
  print_matrix(matrix, r, c);

  printf("----------\n");
  find_2D(matrix, r, c, matrix[1]); //matrix[i] 요소 값을 가진 모든 요소의 2차원 index 출력.
  
  return 0;
}