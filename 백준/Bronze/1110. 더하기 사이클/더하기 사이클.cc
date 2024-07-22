#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cycle(int N, int a)
{
	int n1, n2;
	int count = 0;
	while (1)
	{
		n1 = N / 10;
		n2 = N % 10;
		N = n1 + n2;
		N = n2 * 10 + N % 10;
		count++;
		if(N == a) return count;
	}
}
int main(void)
{
	int N = 0, ans;
	scanf("%d", &N);

	ans = cycle(N, N);
	printf("%d", ans);

	return 0;
}

