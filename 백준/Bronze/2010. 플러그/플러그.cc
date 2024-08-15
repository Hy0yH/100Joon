#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plug[500000];

int main() 
{
	int N = 0, count = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &plug[i]);
	}
	for (int i = 0; i < N; i++)
	{
		if (i == N - 1)
			count += plug[i];
		else
			count += plug[i] - 1;
	}
	printf("%d", count);

	return 0;
}
