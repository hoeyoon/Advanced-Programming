#include <stdio.h>

int main(){
  int x[3];
  puts("3���� ������ �Է��ϼ���.");
  
  for(int i = 0; i < 3; i++){
    printf("���� %d : ", i + 1);
    scanf("%d", &x[i]);
  }

  printf("�� �� ���� ��� ����� %d�Դϴ�.\n", x[0] + x[1] - x[2]);
  return 0;
}