/*
##문제 설명
2차원 평면의 점을 (x, y) 좌표 구조체로 정의하고, 점의 좌표를 입력받은 후 
이 점이 어떤 사분면에 속하는지 출력한다. 
quadrant() 함수는 점이 속하는 사분면의 번호를 반환하는 함수이다.

int quadrant(struct point p)

##입력 예시 1
-1 2

##출력 예시 1
사분면=2

##입력 예시 2
1 -2

##출력 예시 2
사분면=4
*/

#include <stdio.h>

typedef struct{
  int x;
  int y;
} point;

int quardrant(point p){
  if(p.x > 0){
    if(p.y > 0){
      return 1;
    }
    else{
      return 4;
    }
  }
  else{
    if(p.y > 0){
      return 2;
    }
    else{
      return 3;
    }
  }
}

int main(){
  point p;
  scanf("%d %d", &p.x, &p.y);
  int q = quardrant(p);
  printf("사분면=%d\n", q);
  return 0;
}
