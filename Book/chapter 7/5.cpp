#include <stdio.h>

unsigned pow2(unsigned no){
	unsigned pw = 1;
	
	while(no--){
		pw *=2;
	}
	return pw;
}

int main(){
	unsigned m_pow, d_pow, l_sht, r_sht;
	unsigned x, n;
	
	printf("부호 없는 정수 x를 n비트 시프트합니다.\n");
	printf("x : ");
	scanf("%u", &x);
	printf("n : ");
	scanf("%u", &n);
	
	m_pow = x * pow2(n);
	d_pow = x / pow2(n);
	
	l_sht = x << n;
	r_sht = x >> n;
	
	printf("[a] x * (2의 %u제곱) == %u\n", n, m_pow);
	printf("[b] x / (2의 %u제곱) == %u\n", n, d_pow);
	printf("[c] x << %u == %u\n", n, l_sht);
	printf("[d] x << %u == %u\n", n, r_sht);
	
	printf("[a]와 [c]의 값은 일치%s.\n", (r_sht == d_pow) ? "합니다" : "하지 않습니다");
	printf("[b]와 [d]의 값은 일치%s.\n", (r_sht == d_pow) ? "합니다" : "하지 않습니다");
	return 0;
}
