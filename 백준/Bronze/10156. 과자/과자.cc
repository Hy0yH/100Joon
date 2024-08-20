#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int K = 0, N = 0, M = 0, money = 0;
	scanf("%d %d %d", &K, &N, &M);
	money = K * N;
	if (money - M < 0)
		printf("%d", 0);
	else
		printf("%d", money - M);

	return 0;
}
