#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);
  int r = a * 2;

  for(int i = 1; i <= r; i++){
    if(r % i == 0){
      for(int j = 1; j <= r; j++){
        if(i * j == r){
          if(i <= j){
            printf("%d x %d\n", i, j);
          }
        }
      }
    }
  }
  
  return 0;
}