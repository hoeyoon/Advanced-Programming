#include <stdio.h>

int main(){
  int h, w, s1, s2;

  printf("옆으로 긴 직사각형을 그립니다.\n");
  printf("한 변(1) : ");
  scanf("%d", &s1);
  printf("한 변(2) : ");
  scanf("%d", &s2);

  if(s1 > s2){ // s1, s2중 큰값을 가로로 지정
    w = s1;
    h = s2;
  }
  else{
    w = s2;
    h = s1;
  }

  for(int i = 1; i <= h; i++){ //i를 1부터 h의 값까지 반복
    for(int j = 1; j <= w; j++){ //j를 1부터 w의 값까지 반복
      printf("*");
    }
    printf("\n"); // 한줄이 완성되면 줄바꿈
  }
  return 0;
}