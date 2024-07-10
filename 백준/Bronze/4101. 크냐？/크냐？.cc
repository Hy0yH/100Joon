#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
			printf("Yes\n");
		if (b > a)
			printf("No\n");
        if (a == b && a != 0 && b != 0)
            printf("No\n");
		if (a == 0 && b == 0)
			break;
	}
	return 0;
}
