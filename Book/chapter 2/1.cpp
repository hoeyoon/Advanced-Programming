#include <stdio.h>

int main(){
  int x;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &x);

  printf("10�� ���ϸ� %d�Դϴ�.\n", x + 10);
  printf("10�� ���� %d�Դϴ�.\n", x - 10);
  printf("10�� ���ϸ� %d�Դϴ�.\n", x * 10);
  printf("10���� ���� ���� %d�Դϴ�.\n", x / 15);
  printf("10���� ���� �������� %d�Դϴ�.\n", x % 10);

  return 0;
}