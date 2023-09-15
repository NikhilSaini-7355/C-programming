#include <stdio.h>
main()
{
	printf("Input employeeId and annual salary");
	int id; float salary; float deduction=0.0;
	scanf("\n%d%f",&id,&salary);
	if(salary>0.0 && salary<300000.0)
	{  printf("no ded");
		deduction =0.0;
	}
	else if(salary>=300000.0 && salary<600000.0)
	{   printf("hello");
		deduction =((float)5/100)*salary;
		printf("%f",deduction);
	}
	else if(salary>=600000.0 && salary<900000.0)
	{
		deduction =((float)10/100)*salary;
	}
	else if(salary>=900000.0 && salary<1200000.0)
	{
		deduction =((float)15/100)*salary;
	}
	else if(salary>=1200000.0 && salary<1500000.0)
	{
		deduction =((float)20/100)*salary;
	}
	else if(salary>=1500000.0)
	{
		deduction =((float)30/100)*salary;
	}
	printf("\nemployeeId=%d",id);
	float netsalary = salary - deduction;
	printf("\nsalary=%f",salary);
	printf("\ndeduction=%f",deduction);
	printf("\nnetsalary=%f",netsalary);
	
}
