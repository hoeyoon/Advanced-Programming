#include <stdio.h>

int main(){
  int x, y;
  printf("2���� �������� �Է��ϼ���.\n");

  printf("���� x : ");
  scanf("%d", &x);

  printf("���� y : ");
  scanf("%d", &y);

  printf("x���� y���� %d%%�Դϴ�.\n", 100 * x / y);

  return 0;
}