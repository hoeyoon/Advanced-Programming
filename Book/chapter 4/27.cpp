#include <stdio.h>

int main(){
  int n;
  printf("왼쪽 아래가 직각인 직각이등변삼각형을 만듭니다.\n");
  printf("짧은 변 : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지 출력
    for(int j = 1; j <= i; j++){ //각 행에 i개의 *출력
      printf("*");
    }
    printf("\n"); //한줄이 출력되면 줄바꿈
  }
  printf("\n");

  printf("왼쪽 위가 직각인 직각이등변삼각형을 만듭니다.\n");
  printf("짧은 변 : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지 반복
    for(int j = 1; j <= n + 1 - i; j++){ 
      //j를 1부터 n + 1 - i까지 반복 ex) n = 5, i = 1, j <= 5, i = 2, j <= 4 
      printf("*");
    }
    printf("\n"); //한줄이 출력되면 줄바꿈
  }
  printf("\n");

  printf("오른쪽 아래가 직각인 직각이등변삼각형을 만듭니다.\n");
  printf("짧은 변 : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지 반복
    for(int j = 1; j <= n - i; j++){ //각 행에 n - i개의 공백 출력
      printf(" ");
    }
    for(int j = 1; j <= i; j++){ //각 행에 i개의 *출력
      printf("*");
    }
    printf("\n"); //한줄이 출력되면 줄바꿈
  }
  printf("\n");

  printf("오른쪽 위가 직각인 직각이등변삼각형을 만듭니다.\n");
  printf("짧은 변 : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지 반복
    for(int j = 1; j <= i - 1; j++){ //각 행에 i - 1개의 공백 출력
      printf(" ");
    }
    for(int j = 1; j <= n + 1 - i; j++){ //각 행에 n + 1 - i개의 *출력
      printf("*");
    }
    printf("\n"); //한줄이 출력되면 줄바꿈
  }
  return 0;
}