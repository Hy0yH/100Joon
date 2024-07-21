#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int N = 0, M = 0;
	double total = 0;
	int exam[1000] = { 0 };
	double F_exam[1000] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &exam[i]);
		if (exam[i] > M)
			M = exam[i];
	}

	for (int j = 0; j < N; j++)
	{
		F_exam[j] = (double)exam[j] / M * 100;
		total = total + F_exam[j];
	}
	
	printf("%f", total / N);

	return 0;
}

