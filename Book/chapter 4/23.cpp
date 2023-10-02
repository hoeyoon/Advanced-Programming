#include <stdio.h>

int main(){
  int h;
  printf("정사각형을 그립니다.\n");
  printf("높이는 얼마입니까? ");
  scanf("%d", &h);

  for(int i = 1; i <= h; i++){ // i를 1부터 h의 값까지 반복
    for(int j = 1; j <= h; j++){ // j를 1부터 h의 값까지 반복
      printf("*");
    }
    printf("\n"); // 한줄이 출력되면 줄바꿈
  }
  return 0;
}