// Let's make a star tree !!!

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int i, iOne, iTwo, iThree, iFour, iFive, iSix;
	int iRandNumber;
	iOne = iTwo = iThree = iFour = iFive = iSix = 0;

	// What is differant ++i or i++
	/*printf(" ++i = %d\t", ++i); // 2�� ��µȴ�.
	printf(" i++ = %d\n", i++); // 2�� ��µȴ�.
	printf(" i++ = %d\n", i);  // 3�� ��µȴ�.
	*/

	for (i = 0; i < 20; ++i)
	{
		//printf("This is a %dth random number : %d\n",i+1, rand());
		iRandNumber = (rand() % 6) + 1;
		printf("This is a random number of mod 6 : %d\n", iRandNumber);
		switch (iRandNumber)
		{
		case 1:
			++iOne;
			break;
		case 2:
			++iTwo;
			break;
		case 3:
			++iThree;
			break;
		case 4:
			++iFour;
			break;
		case 5:
			++iFive;
			break;
		case 6:
			++iSix;
			break;
		default:
			printf("It is fail ~!");
			break;
		}

	}
	printf("iOne = %d\t", iOne);
	printf("iTwo = %d\t", iTwo);
	printf("iThree = %d\t", iThree);
	printf("iFour = %d\t", iFour);
	printf("iFive = %d\t", iFive);
	printf("iSix = %d\t", iSix);

	return 0;

}

