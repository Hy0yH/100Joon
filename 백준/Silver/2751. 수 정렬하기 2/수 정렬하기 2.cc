#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[2000002];
int main() 
{
	int N = 0, a = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		if (a < 0)
			arr[1000000 - a] = 1;
		else
			arr[a] = 1;
	}
	for (int i = 2000002; i > 1000000; i--)
	{
		if (arr[i] == 1)
		{
			printf("%d\n", (i - 1000000) - (i - 1000000) - (i - 1000000));
		}
	}

	for (int i = 0; i < 1000001; i++)
	{
		if (arr[i] == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
