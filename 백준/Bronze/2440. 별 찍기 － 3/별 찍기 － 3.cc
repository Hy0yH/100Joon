#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = N - i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
