#include <stdio.h>
#include <math.h>
main()
{
	float loan_amt,rate;
	int term;
	float Monthly_payments = 0.0;
	printf("Enter loan amount,monthly interest rate,term");
	scanf("\n%d%f%f",&term,&loan_amt,&rate);
	float p = pow((1+rate),term*12);
	printf("%f",p);
	Monthly_payments =(float) ((rate*loan_amt)*p)/(p-1);

	printf("\nMonthly_payments=%f",Monthly_payments);
}
