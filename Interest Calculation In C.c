#include <stdio.h>
int main()
{			
double rate=0.06;
int duration;
double principal_amount, total_interest;
printf("Enter Duration(in years):\n");
scanf("%d",&duration);
printf("Enter Principal Amount:\n");
scanf("%df",&principal_amount);
total_interest=(principal_amount*duration*rate);
printf("The Total Interest is = %df",total_interest);
	return 0;
}