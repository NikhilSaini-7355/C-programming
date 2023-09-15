#include <stdio.h>
main()
{
	printf("Input length in metres,weight in kg,Volume in litres");
	float length,weight,volume;
	scanf("\n%f%f%f",&length,&weight,&volume);
	float newlength = length*3.280;
     float newweight = weight*2.204;
     float newVolume = volume*0.219;
     printf("\nlength in feet=%f",newlength);
     printf("\nlength in pound=%f",newweight);
	 printf("\nlength in gallons=%f",newVolume);	
}
