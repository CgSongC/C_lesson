// Let's make a tree !!! oh Yes~~~~
#include <stdio.h>
#define STAR_MAX 10
int main()
{
	int i, j, k, iInput;
	printf("�ﰢ�� ũ�⸦ ���ڷ� �Է����ּ��� :");
	scanf("%d", &iInput);
	// Upper triangle
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
		printf("\n");
	}
	// Lower triangle
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
		for (k= iInput*2-i*2-3; k>0;--k)
		{
			printf("*");
		}
		printf("\n");
	}
}