#include <stdio.h>

int main(){
  int a, b, h;

  printf("��ٸ����� ���̸� ���մϴ�.\n");
  
  printf("���� : ");
  scanf("%d", &a);

  printf("�غ� : ");
  scanf("%d", &b);

  printf("���� : ");
  scanf("%d", &h);

  printf("���̴� %f�Դϴ�.\n", (a + b) * h / 2.0);
  return 0;
}