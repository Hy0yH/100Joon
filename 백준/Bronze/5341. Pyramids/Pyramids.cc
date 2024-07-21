#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int N = 0;
	while (1)
	{
		int tmp = 0;
		scanf("%d", &N);
		if (N == 0)
			break;
		for (int i = 1; i <= N ; i++)
		{
			tmp += i;
		}
		printf("%d\n", tmp);
	}

	return 0;
}

