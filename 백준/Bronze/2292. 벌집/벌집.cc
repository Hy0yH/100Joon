#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int honeycomb(int n)
{
	if (n == 0)
		return 0;
	else
		return n + honeycomb(n - 1);

}

int main(void)
{
	int N = 0, count = 0;
	scanf("%d", &N);

	for (int i = 0; ; i++)
	{
		if (1 + 6 * honeycomb(i) < N)
		{
			count++;
			continue;
		}
		else
			break;
	}

	printf("%d", count + 1);

	return 0;
}
