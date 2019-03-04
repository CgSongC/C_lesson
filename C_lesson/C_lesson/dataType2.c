// What is data type

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	// int �� �ִ� ������?
	int iNumMax = INT_MAX;
	printf("iNumMax = %d\n",iNumMax);

	// char �� �ִ� ������?
	char cNumMax = CHAR_MAX;
	printf("cNumMax = %d\n",cNumMax);

	// long �� �ִ� ������?
	long lNumMax = LONG_MAX;
	printf("lNumMax = %d\n",lNumMax);

	// long long �� �ִ� ������?
	long long llNumMax = LLONG_MAX;
	printf("llNumMax = %d\n",llNumMax);

	// int �� �ִ� ����� 1�� ���ϸ�?
	printf("iNumMax + 1 = %d\n", iNumMax+1);

	// char �� �ִ� ����� 1�� ���ϸ�?
	printf("cNumMax + 1 = %d\n", cNumMax+1);

	// long �� �ִ� ����� 1�� ���ϸ�?
	printf("lNumMax + 1 = %d\n", lNumMax+1);

	// long long �� �ִ� ����� 1�� ���ϸ�?
	printf("llNumMax + 1 = %d\n", llNumMax+1);
	return 0;
}