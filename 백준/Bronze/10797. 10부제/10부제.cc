#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, count = 0;
	int arr[5];
	scanf("%d", &N);
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == N)
			count++;

	}

	printf("%d", count);
	return 0;
}
