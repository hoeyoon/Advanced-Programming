#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int a[n][4];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      a[i][j] = i * 4 + j;
    }
  }
  int b[n][4];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      if(i % 2 == 1){
        b[i][j] = a[i][3 - j];
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      if(i % 2 == 1){
        a[i][j] = b[i][j];
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}