#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, M = 0, sum = 0, max_sum = 0;
	int num[100] = { 0 };

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = num[i] + num[j] + num[k];

				if (sum <= M && sum > max_sum)
					max_sum = sum;
			}
		}
	}

	printf("%d", max_sum);

	return 0;
}
