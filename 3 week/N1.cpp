#include <stdio.h>

int main(){
  int x[3];
  for(int i = 0; i < 3; i++){
    scanf("%d", &x[i]);
  }  
  int temp = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(x[i] > x[j]){
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }
  for(int i = 0; i < 3; i++){
    printf("%d ", x[i]);
  }
  return 0;
}
