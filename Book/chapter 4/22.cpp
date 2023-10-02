#include <stdio.h>

int main(){
  printf(" |");
  for(int i = 1; i <= 9; i++){
    printf("%d ", i);
  }
  printf("\n");

  printf("--+----------------------------------\n");

  for(int i = 1; i <= 9; i++){ //i를 1부터 9까지 반복
    printf("%d |", i); //i 출력
    for(int j = 1; j <= 9; j++){ //j를 1부터 9까지 반복
      printf("%d ", i * j); // i * j 출력
    }
    printf("\n"); // 구구단 하나 출력하면 줄바꿈
  }
  return 0;
}