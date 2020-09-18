#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	printf("Are you hungry?\n");
	scanf("%d", &a);

	if (a == 1)
	{

		printf("What do you wanna eat?\n");
		scanf("%d", &b);
		if (b == 2)
		{
			printf("You wanna eat pizza!");
		}
		if (b == 3)
		{
			printf("You wanna eat KFC!");
		}
		if (b == 4)
		{
			printf("You wanna eat noodles");
		}
	}
	else if (a == 0)
	{
		printf("You are not hungry!");
	}

	return 0;
}