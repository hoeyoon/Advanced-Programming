#include <stdio.h>
#include <string.h>

int main(){
  char str[128];
  scanf("%[^\n]s", str);
  int len = strlen(str);
  printf("%s", str);
  for(int i = len - 1; i >= 0; i--){
    printf("%c", str[i]);
  }
  return 0;
}