#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	a = a * (100 - b) / 100;
	if (a >= 100)
		printf("0");
	else
		printf("1");

	return 0;
}