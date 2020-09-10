#include<stdio.h>
int main()
{
	int num, i, j;
	printf("enter number : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num - i; j++) printf(" ");
		for (j = 1; j <= i * 2 - 1; j++) printf("*");
		printf("\n");
	}
	printf("\n");
	return 0;
}