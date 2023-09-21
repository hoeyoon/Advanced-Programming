#include <stdio.h>

int main(){
  int x[3];
  for(int i = 0; i < 3; i++){
    scanf("%d", &x[i]);
  }

  int temp = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 3; j++){
      if(x[i] < x[j]){
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }
  int diff1, diff2;
  if(x[1] > x[0]){
    diff1 = x[1] - x[0];
  }
  else{
    diff1 = x[0] - x[1];
  }
  if(x[1] > x[2]){
    diff2 = x[1] - x[2];
  }
  else{
    diff2 = x[2] - x[1];
  }
  
  if(diff1 == diff2){
    if(x[2] > x[0]){
      printf("%d\n", x[0]);
    }
    else{
      printf("%d\n", x[2]);
    }
  }

  else if(diff1 > diff2){
    printf("%d\n", x[0]);
  }
  
  else{
    printf("%d\n", x[2]);
  }
  return 0;
}
