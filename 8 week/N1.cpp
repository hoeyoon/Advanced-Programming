#include <stdio.h>

void print(int n) {
  if(n <= 1) {
    printf("A");
  } 
  else{
    for (int i = 0; i < n; i++) {
      printf("A");
    }
    printf("\n");

    print(n - 1);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  print(n);
  return 0;
}