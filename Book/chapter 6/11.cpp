#include <stdio.h>
#define NUMBER 7

void rev_intary(int v[], int n){
  int temp;
  for(int i = 0; i < n / 2; i++){
    temp = v[i];
    v[i] = v[n - i - 1];
    v[n - 1 - i] = temp;
  }
}

int main(){
  int x[NUMBER];
  for(int i = 0; i < NUMBER; i++){
    printf("x[%d] : ", i);
    scanf("%d", &x[i]);
  }

  rev_intary(x, NUMBER);

  printf("반전했습니다.\n");
  for(int i = 0; i < NUMBER; i++){
    printf("x[%d] : %d\n", i, x[i]);
  }
  return 0;
}
