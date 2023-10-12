#include <stdio.h>

int point[7];

void print_success();

int main(){
  extern int point[7];

  printf("7명의 점수를 입력해주세요.\n");
  for(int i = 0; i < 7; i++){
    printf("%d : ", i + 1);
    scanf("%d", &point[i]);
  }

  print_success();
  
  return 0;
}

void print_success(){
  extern int point[7];

  printf("합격자 목록\n");
  printf("---------\n");

  for(int i = 0; i < 7; i++){
    if(point[i] >= 60){
      printf("%d번 : %d\n", i + 1, point[i]);
    }
  }
  printf("---------\n");
}
