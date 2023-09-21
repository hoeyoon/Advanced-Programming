#include <stdio.h>

int main(){
  int a;
  printf("몇 월인가요? ");
  scanf("%d", &a);
  printf("%d월은 ", a);

  switch(a){
    case 3:
    case 4:
    case 5:
      printf("봄입니다\n");
      break;
    case 6:
    case 7:
    case 8:
      printf("여름입니다.\n");
      break;
    case 9:
    case 10:
    case 11:
      printf("가을입니다.\n");
      break;
    case 12:
    case 1:
    case 2:
      printf("겨울입니다.\n");
      break;
    default:
      printf("없는 월입니다.\n");
      break;
  }
  return 0;
}
