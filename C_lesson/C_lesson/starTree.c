// Let's make a tree !!! oh Yes~~~~
#include <stdio.h>
#define STAR_MAX 10
int main()
{
	int i, j, k;
	// printf("*");
	for (i = 0; i < STAR_MAX; ++i) 
	{
		for (j = STAR_MAX; j > i;--j)
		{
			printf(" ");
		}
		for (k = 0; k < i; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}