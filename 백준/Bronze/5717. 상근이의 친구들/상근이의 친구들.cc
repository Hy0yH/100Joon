#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int M = 0, F = 0;
	while (1)
	{
		scanf("%d %d", &M, &F);
		if (M == 0 && F == 0)
		{
			break;
		}
		printf("%d\n", M + F);
	}

	return 0;
}