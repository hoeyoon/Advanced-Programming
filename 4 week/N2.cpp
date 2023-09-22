#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  int count = 0;
  for(int i = 1; i <= a && i <= b; i++){
    if(a % i == 0 && b % i == 0){
      printf("%d ", i);
      count++;
    }
  }
  printf("\n공약수는 %d개\n", count);
  return 0;
}