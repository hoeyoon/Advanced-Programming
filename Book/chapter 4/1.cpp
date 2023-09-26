#include <stdio.h>

int main(){
  int retry;

  do{
    int no;

    printf("정수를 입력하세요 : ");
    scanf("%d", &no);

    if(no == 0){
      printf("이 수는 0입니다.\n");
    }
    else if(no > 0){
      printf("이 수는 양수입니다.\n");
    }
    else{
      printf("이 수는 음수입니다.\n");
    }

    printf("한 번 더 ? [Yes...0/No...9] : ");
    scanf("%d", &retry);
  }while(retry == 0);
  return 0;
}
