#include <stdio.h>

int main(){
  double height, weight;

  printf("Ű�� �Է��ϼ��� : ");
  scanf("%lf", &height);

  printf("�����Ը� �Է��ϼ��� : ");
  scanf("%lf", &weight);

  printf("BMI�� %.2lf�Դϴ�.\n", weight / ((height / 100.0) * (height / 100.0)));
  return 0;
}