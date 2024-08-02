#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a == b && a != 0 && b != 0)
	{
		printf("Even %d", a + b);
	}
	else if (a != b)
	{
		if (a > b)
		{
			printf("Odd %d", 2 * a);
		}
		if (b > a)
		{
			printf("Odd %d", 2 * b);
		}
	}
	else
		printf("Not a moose");

	return 0;
}
