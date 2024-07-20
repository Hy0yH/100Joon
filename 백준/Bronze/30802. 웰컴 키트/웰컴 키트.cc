#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, T = 0, P = 0, count = 0;
	int SIZE[6] = {};
	scanf("%d", &N);

	for (int i = 0; i < 6; i++)
		scanf("%d", &SIZE[i]);

	scanf("%d %d", &T, &P);
	for (int j = 0; j < 6; j++)
	{
		if (SIZE[j] == 0)
			continue;
		else if (SIZE[j] / T == 0)
			count++;
		else if (SIZE[j] % T == 0)
			count = count + SIZE[j] / T;
		else
			count = count + 1 + SIZE[j] / T;
	}
	printf("%d\n", count);
	printf("%d %d\n", N / P, N % P);

	return 0;
}
