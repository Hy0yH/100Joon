#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, ans = 0;
	scanf("%d", &N);
	for (int num = 1; num < N; num++)
	{
		int sum = 0;
		int temp = num;
		while (temp != 0)
		{
			sum = sum + temp % 10;
			temp = temp / 10;
		}
		if (num + sum == N)
		{
			ans = num;
			break;
		}
	}
	printf("%d", ans);

	return 0;
}
