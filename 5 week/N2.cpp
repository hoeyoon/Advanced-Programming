#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int a[n][5];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 5; j++){
      scanf("%d", &a[i][j]);
    }
  }
  int b[50];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 5; j++){
      b[i * 5 + j] = a[i][j];
    }
  }
  int temp = 0;
  for(int i = 0; i < n * 5; i++){
    for(int j = 0 ; j < n * 5; j++){
      if(b[i] > b[j]){
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
      }
    }
  }
  for(int i = 0; i < n * 5; i++){
    printf("%d ", b[i]);
  }
  return 0;
}