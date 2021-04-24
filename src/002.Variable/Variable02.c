#include <stdio.h>

int main()
{
	int a = 127;
	
	printf("%d의 %d 진수 표현은 : %o \n", a, 8, a);
	printf("%d의 %d 진수 표현은 : %d \n", a, 10, a);
	printf("%d의 %d 진수 표현은 : %x \n", a, 16, a);
	
	return 0;
}