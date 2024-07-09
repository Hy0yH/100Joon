#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, num, count = 0;
	int arr[100] = { 0 };

	scanf("%d", &N);
	count = N;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}

	for (int j = 0; j < N; j++)
	{
		if (arr[j] == 1)
		{
			count--;
		}
		else {
			for (int k = 2; k < arr[j]; k++)
			{
				if (arr[j] % k == 0)
				{
					count--;
					break;
				}
			}
		}
	}
	printf("%d", count);

	return 0;
}
