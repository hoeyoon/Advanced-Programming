#include <stdio.h>

int main(){
  double a, b;

  printf("2���� ������ �Է��ϼ���.\n");

  printf("���� a : ");
  scanf("%lf", &a);

  printf("���� b : ");
  scanf("%lf", &b);

  printf("a���� b�� %f%%�Դϴ�.\n", 100 * a / b);
  return 0;
}