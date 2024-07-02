#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i < a + 1; i++)
	{
		for (int j = 0; j < a - i; j++)
			printf(" ");
		for (int k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
