/*
정적기억기간을 갖는 오브젝트의 어드레스를 표시하는 프로그램을 작성하라.
*/

#include <stdio.h>

int nx;

int main(void)
{
	static double dx;
	static int vc[3];

	printf("nx의 어드레스 : %p\n", &nx);
	printf("dx의 어드레스 : %p\n", &dx);
	printf("VC[0]의 어드레스 : %p\n", &vc[0]);
	printf("VC[1]의 어드레스 : %p\n", &vc[1]);
	printf("VC[2]의 어드레스 : %p\n", &vc[2]);

	return 0;

}

