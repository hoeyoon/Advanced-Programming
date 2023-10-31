#include <stdio.h>
#define alert() (printf("\a\a"))
#define puts_alert2(str) (alert(), puts(str))

int main(){
	int n;

	printf("정수를 입력해주세요: ");
	scanf("%d", &n);

	if(n){
		puts_alert2("이 수는 0이 아닙니다.");
	}
	else{
		puts_alert2("이 수는 0입니다.");
	}
	return 0;
}
