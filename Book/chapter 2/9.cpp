#include <stdio.h>

int main(){
  double a, b;

  printf("2���� �Ǽ��� �Է��ϼ���.\n");
  printf("�Ǽ� a : ");
  scanf("%lf", &a);

  printf("�Ǽ� b : ");
  scanf("%lf", &b);

  printf("a�� ���� b�� %lf%%�Դϴ�.\n", 100 *  a / b);
  return 0;
}