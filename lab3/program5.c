#include <stdio.h>
main()
{
	printf("enter temperature in celsius");
	int temperature;
	scanf("%d",&temperature);
	if(temperature<0)
	{
		printf("freezing weather");
	}
	if(temperature>=0 && temperature<10)
	{
		printf("very cold weather");
	}
	if(temperature>=10 && temperature<20)
	{
		printf("cold weather");
	}
	if(temperature>=20 && temperature<30)
	{
		printf("Normal weather");
	}
    if(temperature>=30 && temperature<40)
	{
		printf("Hot weather");
	}
	if(temperature>=40)
	{
		printf("Very Hot weather");
	}	
}
