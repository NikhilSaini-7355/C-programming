#include <stdio.h>
main()
{ printf("enter amount in INR");
float amount,usd_amt,cnd_amt,pkr_amt;
scanf("%f",&amount);
usd_amt = amount*0.012;
cnd_amt = amount*0.016;
pkr_amt = amount*3.56;
printf("\nAmount in INR=%f",amount);
printf("\nAmount in USD=%f",usd_amt);
printf("\nAmount in CND=%f",cnd_amt);
printf("\nAmount in PKR=%f",pkr_amt);
}
