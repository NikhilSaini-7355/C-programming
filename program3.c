#include <stdio.h>
main()
{
	printf("input three numbers");
	float num_1,num_2,num_3;
	scanf("\n%f\n%f\n%f",&num_1,&num_2,&num_3);
	if(num_1>num_2)
	{
		if(num_3>num_1)
		{
			printf("largest number is %f",num_3);
		}
		else
		{
			printf("largest number is %f",num_1);
		}
	}
	else if(num_3>num_2)
	{
		if(num_1>num_3)
		{
			printf("largest number is %f",num_1);
		}
		else
		{
			printf("largest number is %f",num_3);
		}
	}
	if(num_2>num_1)
	{
		if(num_3>num_2)
		{
			printf("largest number is %f",num_3);
		}
		else
		{
			printf("largest number is %f",num_2);
		}
	}
	
}
