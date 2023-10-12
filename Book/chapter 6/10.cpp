#include <stdio.h>
#define NUMBER 5

int min_of(const int v[], int n){
  int min = v[0];
  for(int i = 0; i < n; i++){
    if(v[i] < min){
      min = v[i];
    }
  }
  return min;
}

int main(){
  int e[NUMBER];
  int m[NUMBER];
  int min_e;
  int min_m;

  printf("%d명의 점수를 입력해주세요.\n", NUMBER);
  for(int i = 0; i < NUMBER; i++){
    printf("(%d) 영어 : ", i + 1);
    scanf("%d", &e[i]);

    printf("    수학 : ");
    scanf("%d", &m[i]);
  }

  min_e = min_of(e, NUMBER);
  min_m = min_of(m, NUMBER);
  
  printf("영어 최저 점수=%d\n", min_e);
  printf("수학 최저 점수=%d\n", min_m);
  return 0;
}
