#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int col = 0, under_bar = 0, count = 0;
	char emo[32] = { 0 };
	scanf("%s", &emo);
	for (int i = 0; i < strlen(emo); i++)
	{
		if (emo[i] == ':')
			col++;
		if (emo[i] == '_')
			under_bar++;
	}
	printf("%d", strlen(emo) + col + under_bar * 5);

	return 0;
}

