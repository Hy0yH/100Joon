#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int N = 0, total = 0, count = 0;
	int answer[100] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &answer[i]);
	}
	for (int i = 0; i < N; i++)
	{
		if (answer[i] == 0)
		{
			count = 0;
			continue;
		}
		else if (answer[i] == 1)
		{
			count++;
			total += count;
		}
	}
	printf("%d", total);

	return 0;
}
