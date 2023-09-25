/*
## 문제 설명
3x3 크기의 정수형 배열 mx와 my를 선언한다. 
배열 mx와 my에 사용자로부터 정수를 입력 받은 후, 각 위치 요소의 mx 값에서 my 값을
뺀다. 뺄셈 결과 값을 다시 mx에 저장하고, 저장된 값을 읽어 출력하는 프로그램을 만든다.

## 입력 예시
1 2 3 4 5 6 7 8 9
10 11 12 13 14 15 16 17 18

# 출력 예시
-9-9-9
-9-9-9
-9-9-9
*/

#include <stdio.h>

int main(){
  int mx[3][3], my[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &mx[i][j]);
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &my[i][j]);
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      mx[i][j] = mx[i][j] - my[i][j];
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d", mx[i][j]);
    }
    printf("\n");
  }
  return 0;
}