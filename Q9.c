#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
	system("cls");
	char c[100];
	int tong = 0, i, len;
	gets(c);
	len = strlen(c);
	for (i = 0; i < len; i++)
	{
		tong += ((int) c[i] - 48);
	}
	printf("\nOUTPUT:\n");
	printf("%d", tong);
	printf("\n");
	system("pause");
	return(0);
}