#include <stdio.h>
main()
{
	printf("enter coordinates x and y");
	int x,y;
	scanf("\n%d\n%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("first Quadrant");
	}
	if(x>0 && y<0)
	{
		printf("fourth Quadrant");
	}
	if(x<0 && y>0)
	{
		printf("second Quadrant");
	}
	if(x<0 && y<0)
	{
		printf("Third Quadrant");
	}
}
