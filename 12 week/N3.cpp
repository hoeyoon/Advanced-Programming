/*
##문제 설명
상품판매(상품명, 가격, 매출액)에 대한 구조체 배열을 만들고 5개를 입력받은 후 
선택(1. 상품명 검색, 2. 상품판매 내역 출력) 사항을 수행한다. 
상품명을 검색은 search_brand() 함수에서, 상품판매 내역과 매출액 총계 출력은 
print_arr() 함수에서 수행한다.

search_brand(Product a[], int n)
print_arr(Product arr[], int arr_len)

##입력 예시 1(5개의 상품명, 가격, 매출액 입력; 1 상품명 검색 모니터 출력 선택)
컴퓨터 90000 9900000
마우스 10000 2200000
모니터 70000 8000000
프린트 50000 7500000
키보드 30000 5500000
1
모니터

##출력 예시 1
모니터 70000 8000000

##입력 예시 2(5개의 상품명, 가격, 매출액 입력; 2 상품판매 내역 출력 선택)
가방 10000 2500000
의자 30000 4500000
책상 50000 9500000
탁자 40000 5500000
신발 20000 3500000
2

##출력 예시 2
가방 10000 2500000
의자 30000 4500000
책상 50000 9500000
탁자 40000 5500000
신발 20000 3500000
매출액 총계:25500000
*/

#include <stdio.h>
#include <string.h>

typedef struct {
  char name[100];
  int money;
  int revenue;
} Product;

void search_brand(Product a[], int n) {
  char str[100];
  scanf("%s", str);
  for (int i = 0; i < n; i++) {
    if (strcmp(a[i].name, str) == 0) {
      printf("%s %d %d", a[i].name, a[i].money, a[i].revenue);
    }
  }
}

void print_arr(Product arr[], int arr_len) {
  for(int i = 0; i < 5; i++){
    printf("%s %d %d\n", arr[i].name, arr[i].money, arr[i].revenue);
  }
  int sum = 0;
  for (int i = 0; i < arr_len; i++) {
    sum += arr[i].revenue;
  }
  printf("매출액 총계:%d\n", sum);
}

int main() {
  Product p[5];
  int n;
  for (int i = 0; i < 5; i++) {
    scanf("%s %d %d", p[i].name, &p[i].money, &p[i].revenue);
  }
  scanf("%d", &n);
  if (n == 1) {
    search_brand(p, 5);
  } 
  else if (n == 2) {
    print_arr(p, 5);
  }

  return 0;
}
