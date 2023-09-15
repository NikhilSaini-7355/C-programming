#include <stdio.h>
main()
{
	float angle_1,angle_2,angle_3;
	printf("enter the three angles\n");
	scanf("%f\n%f\n%f",&angle_1,&angle_2,&angle_3);
	if(angle_1+angle_2+angle_3 == 180.0)
	{
	
	if(angle_1==60.0 && angle_2==60.0 && angle_3==60.0 )
	printf("equilateral triangle");
	else if((angle_1==angle_2) || (angle_3==angle_2) || (angle_1==angle_3))
	{
		printf("Isosceles triangle");
	}
	else
	{
		printf("Scalene triangle");
	}
}
else
{
	printf("given angles can not form a triangle");
}
	
}
