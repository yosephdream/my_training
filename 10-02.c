/*
두 개의 정수 값을 포인터를 이용해서 교환
*/

#include <stdio.h>

int main(void){

	int n1, n2, temp;
	int *np1 = &n1, *np2 = &n2;

	puts("두 개의 정수를 입력하시오");
	printf("정수 1 :"); scanf("%d", &n1);
	printf("정수 2 :"); scanf("%d", &n2);

	temp = *np1;
	*np1 = *np2;
	*np2 = temp;

	puts("이 두 개의 정수의 값을 교환했습니다.");
	printf("정수 1은 %d 입니다.\n", n1);
	printf("정수 2은 %d 입니다.\n", n2);

	return 0;

}

