#include <stdio.h>

int CMP[1000000];

int main(void)
{
	int N = 0, MIN = 1000000, MAX = -1000000, tmp = 0;
	scanf("%d\n", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &CMP[i]);
	}
	for (int j = 0; j < N; j++)
	{
		tmp = CMP[j];
		if (tmp > MAX)
			MAX = tmp;
		if (tmp < MIN)
			MIN = tmp;
		
	}
	printf("%d %d", MIN, MAX);

	return 0;
}