#include <stdio.h>

int main(){
  int score;
  printf("점수 : ");
  scanf("%d", &score);

  if(score > 100 || score < 0){
    printf("올바르지 않는 점수입니다.\n");
  }
  else if(score >= 80){
    printf("우수\n");
  }
  else if(score >= 70){
    printf("양호\n");
  }
  else if(score >= 60){
    printf("가능\n");
  }
  else{
    printf("불가\n");
  }
  return 0;
}
