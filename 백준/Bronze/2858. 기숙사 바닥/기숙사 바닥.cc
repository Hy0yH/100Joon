#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int R = 0, B = 0, W = 0, L = 0;
	scanf("%d %d", &R, &B);

	for (int i = 1; i <= B; i++)
	{
		if (B % i == 0)
		{
			W = B / i;
			if (2 * i + 2 * W + 4 == R)
			{
				if (W >= i)
				{
					printf("%d %d", W + 2, i + 2);
					break;
				}
				else
				{
					printf("%d %d", i + 2, W + 2);
					break;
				}
			}
		}


	}

	return 0;
}
