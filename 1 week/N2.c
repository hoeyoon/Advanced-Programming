#include <stdio.h>

int main(){
  int x, y;
  printf("2���� ������ �Է��ϼ���.\n");

  printf("���� 1 : ");
  scanf("%d", &x);

  printf("���� 2 : ");
  scanf("%d", &y);

  printf("�� �� ���� ���� %d�Դϴ�.\n", x + y);
  printf("�� �� ���� ���� %d�Դϴ�.\n", x - y);
  printf("�� �� ���� ���� %d�Դϴ�.\n", x * y);
  printf("�� �� ���� ���� %d�Դϴ�.\n", x / y);
  return 0;
}