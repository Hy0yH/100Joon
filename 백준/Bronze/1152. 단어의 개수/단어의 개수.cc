#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char str[1000000];

int main(void)
{
	int count = 0, len;
	scanf("%[^\n]s", str);
	len = strlen(str);

	if (len == 1 && str[0] == ' ')
	{
		printf("%d", count);

		return 0;
	}

	for (int i = 1; i < len - 1; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	printf("%d", count + 1);

	return 0;
}
