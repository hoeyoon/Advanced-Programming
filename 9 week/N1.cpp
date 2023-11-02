#include <stdio.h>
#include <string.h>

int main(){
  char str[10];
  for(int i = 0; i < 10; i++){
    scanf("%s", str);
    if(strstr(str, "$END$")){
      break;
    }
    printf("%s\n", str);
  }
  return 0;
}