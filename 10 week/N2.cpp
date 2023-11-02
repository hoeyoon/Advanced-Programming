#include <stdio.h>

void swap(int *px, int *py){
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

void sort(int *v, int n){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(*(v + i) > *(v + j)){
        swap((v + i), (v + j));
      }
    }
  }
}

int main(){
  int s[10];
  for(int i = 0; i < 10; i++){
    scanf("%d", &s[i]);
  }
  sort(s, 10);
  for(int i = 0; i < 10; i++){
    printf("%d ", s[i]);
  }
  return 0;
}