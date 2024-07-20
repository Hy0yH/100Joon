#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long int N = 0, M = 0;
	scanf("%ld", &N);
	
	for (int i = 0; i < N; i++)
	{
		long int K = 0, D = 0, A = 0;
		long int K_M[100] = {};
		long int D_M[100] = {};
		long int A_M[100] = {};
		long int total = 0;
		scanf("%ld", &M);

		for (int j = 0; j < M; j++)
		{
			scanf("%ld %ld %ld", &K_M[j], &D_M[j], &A_M[j]);
		}
		scanf("%ld %ld %ld", &K, &D, &A);

		for (int j = 0; j < M; j++)
		{
			if (K_M[j] * K + A_M[j] * A - D_M[j] * D < 0)
				continue;
			else
				total = total + K_M[j] * K + A_M[j] * A - D_M[j] * D;
		}
		printf("%ld\n", total);
	}
	return 0;
}
