// How to input or output from user

#include <stdio.h>
#include <string.h>

#define INPUT_MAX 10

int main()
{
	int iInput;
	char cInput;
	int arrInput[INPUT_MAX];
	for (int i = 0; i < INPUT_MAX; ++i)
	{
		printf("%d�� �л��� ������ �Է����ּ��� :", i +1);
		scanf_s("%d", &arrInput[i]);
	}
	for(int i=0; i<INPUT_MAX;++i)
	{
		printf_s("%2d�� �л��� ������ \"%4d\" �Դϴ�.\n",i+1, arrInput[i]);
	}

	return 0;
}