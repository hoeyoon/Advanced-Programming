#include <stdio.h>

int main(){
  int x, y;
  printf("2���� �������� �Է��ϼ���.\n");

  printf("���� x : ");
  scanf("%d", &x);

  printf("���� y : ");
  scanf("%d", &y);

  printf("��հ��� ��ȣ�� ������ ���� %d�Դϴ�.\n", -((x + y) / 2));
  return 0;
}