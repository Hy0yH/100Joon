#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0, M = 0, money;
	scanf("%d %d", &N, &M);
	money = N * 100;
	if (money >= M)
		printf("Yes");
	else
		printf("No");

	return 0;
}