#include <stdio.h>
#include <string.h>

int main(){
  char str[128];
  scanf("%[^\n]s", str);
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    if(str[i] == ' '){
      continue;
    }
    else{
      printf("%c", str[i]);
    }
  }
  return 0;
}