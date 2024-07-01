#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int N = 0, tmp = 0;

	scanf("%d\n", &N);

	int* CMP = (int*)malloc(1000000 * sizeof(int));
	if (CMP == NULL)
	{
		fprintf(stderr, "메모리 할당 오류\n");
		return -1;
	}
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &CMP[i]);
	}
	int MIN = CMP[0];
	int MAX = CMP[0];

	for (int j = 0; j < N; j++)
	{
		tmp = CMP[j];
		if (tmp > MAX)
			MAX = tmp;
		if (tmp < MIN)
			MIN = tmp;
		
	}
	printf("%d %d", MIN, MAX);
	free(CMP);

	return 0;
}
