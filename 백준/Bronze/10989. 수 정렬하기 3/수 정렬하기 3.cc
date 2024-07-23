#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count[10001];

int main(void)
{
	int N = 0, num = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		count[num]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}

	return 0;
}

