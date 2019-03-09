// Let's make a tree !!! oh Yes~~~~
#include <stdio.h>
#define STAR_MAX 10
int main()
{
	int i, j, k, iInput, l;
	printf("삼각형 크기를 숫자로 입력해주세요 :");
	scanf("%d", &iInput);
	// Upper triangle 1
	for (i = 0; i < iInput; ++i)
	{
		for (j = iInput; j > i; --j)
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; ++k)
		{
			printf("*");
		}

		for (l = iInput * 2; l > i * 2; --l)
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; ++k)
		{
			printf("*");
		}
		for (l = iInput * 2; l > i * 2; --l)
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}

	// Lower triangle 1
	for (i = 0; i < iInput - 1; ++i)
	{
		// Low _1_1 번
		for (j = 0; j < i + 2; ++j)
		{
			printf(" ");
		}
		for (k = iInput * 2 - i * 2 - 3; k > 0; --k)
		{
			printf("*");
		}
		// Low_1_2
		for (j = 0; j < i * 2 + 4; ++j)
		{
			printf(" ");
		}
		for (k = iInput * 2 - i * 2 - 3; k > 0; --k)
		{
			printf("*");
		}
		// Low_1_3
		for (j = 0; j < i * 2 + 4; ++j)
		{
			printf(" ");
		}
		for (k = iInput * 2 - i * 2 - 3; k > 0; --k)
		{
			printf("*");
		}
		printf("\n");
	}
	// Upper triangle 2
	for (i = 0; i < iInput; ++i)
	{
		// Up_2_1
		for (j = iInput; j > i; --j)
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; ++k)
		{
			printf("*");
		}
		// Up_2_2
		for (l = iInput * 2; l > i * 2; --l)
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; ++k)
		{
			printf("*");
		}
		// Up_2_3
		for (l = iInput * 2; l > i * 2; --l)
		{
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}

	// Lower triangle 2
	for (i = 0; i < iInput - 1; ++i)
	{
		for (j = 0; j < i + 2; ++j)
		{
			printf(" ");
		}
		for (k = iInput * 2 - i * 2 - 3; k > 0; --k)
		{
			printf("*");
		}
		for (j = 0; j < i * 2 + 4; ++j)
		{
			printf(" ");
		}
		for (k = iInput * 2 - i * 2 - 3; k > 0; --k)
		{
			printf("*");
		}
		for (j = 0; j < i * 2 + 4; ++j)
		{
			printf(" ");
		}
		for (k = iInput * 2 - i * 2 - 3; k > 0; --k)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}