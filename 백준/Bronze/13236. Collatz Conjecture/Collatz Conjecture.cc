#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N = 0, tmp = 0;
	scanf("%d", &N);
	tmp = N;
	printf("%d ", tmp);
	while (1)
	{
		if (tmp == 1)
		{
			break;
		}
		else if (tmp % 2 == 0)
		{
			tmp = tmp / 2;
			printf("%d ", tmp);
			continue;
		}
		else if (tmp % 2 != 0)
		{
			tmp = tmp * 3 + 1;
			printf("%d ", tmp);
			continue;
		}
	}

	return 0;
}

