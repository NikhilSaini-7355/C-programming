#include <stdio.h>
main()
{
	printf("Enter Customer id\n");
	int id;
	scanf("\n%d",&id);
	printf("Enter Name");
	char name;
	float surcharge;
	float net_Bill ;
   
	scanf("\n%c",&name);
	printf("enter consumed unit");
	int unit;
	scanf("\n%d",&unit);
	float bill;
	if(unit<=199)
	{
		bill = unit*1.20;
	}
	else if(unit<=399 && unit >=200)
	{
		bill = unit*1.50;
	}
	else if(unit>=400 && unit<=599)
	{
		bill = unit*1.80;
	}
	else if(unit>=600)
	{
		bill = unit*2.00;
	}
	if(bill<100.0)
	{
		printf("minimum bill should be Rs.100");
	}
	else
	{
	
	if(bill>900.0)
	{
		surcharge = (15/100)*bill;
		net_Bill = bill + surcharge;
		
	}
	else
	{   surcharge = 0.0;
		net_Bill = bill;
	}
	printf("\nCustomer Name :    %c",name);
    printf("\nCustomer id :    %d",id);	
    printf("\nunits consumed :    %d",unit);
    printf("\nBill :    %f",bill);
    printf("\nSurcharge :    %f",name);
    printf("\nFinal Bill :    %f",net_Bill);
}
}
