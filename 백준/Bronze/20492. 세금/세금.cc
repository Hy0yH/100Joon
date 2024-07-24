#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	printf("%d %d", N * 78 / 100, N * 80 / 100 + N * 20 / 100 * 78 / 100);

	return 0;
}

