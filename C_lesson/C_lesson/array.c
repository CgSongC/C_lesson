// What is array, enum, typedef
#include <stdio.h>
typedef enum myWeekend {
	Sunday,     //0
	Monday,     //1
	Tuesday = 5,//2
	Wednesday,  //3
	Thursday,   //4
	Friday,     //5
	Saturday    //6
};
#define ARRAY_NUM 500  
int main()
{
	int iNum = 10,i;
	iNum = 11;
	printf("iNum = %d\n", iNum);
	iNum = 20;
	printf("iNum = %d\n", iNum);

	// Call enum myWeekend
	enum myWeekend myweek1;
	myweek1 = Monday;
	enum myWeekend myweek2;
	myweek2 = Wednesday;

	printf("myweek1 = %d", myweek1);   // output = 1
	printf("myweek2 = %d", myweek2);   // output = 6

	// Array
	int student[ARRAY_NUM];
	//printf("student[0] = %d\n", student[0]);
	for (i = 0; i < ARRAY_NUM; ++i) 
	{
		student[i] = i * i;
		printf("student[%d] = %d\n", i, student[i]);
	}


	return 0;
}