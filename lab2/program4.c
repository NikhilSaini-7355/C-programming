#include <stdio.h>
main()
{
	printf("give 5 subject marks");
	int marks_1,marks_2,marks_3,marks_4,marks_5;
	scanf("\n%d%d%d%d%d",&marks_1,&marks_2,&marks_3,&marks_4,&marks_5);
	int sum = marks_1+marks_2+marks_3+marks_4+marks_5;
	float avg = sum/5;
	printf("\nAverage=%f",avg);
	
}
