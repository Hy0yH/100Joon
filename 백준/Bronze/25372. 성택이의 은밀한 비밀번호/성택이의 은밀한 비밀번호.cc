#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int N = 0;
	char password[20];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", password);
		if (strlen(password) >= 6 && strlen(password) <= 9)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
