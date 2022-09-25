# include <stdio.h>

int main()
{
	int hours = 0, normal_hours = 40; //initialize integer variables for hours worked and non-overtime hours

	float wage = 0.0, gross_pay = 0.0; //initialize float variables for hourly wage and gross pay

	printf("%s", "Enter # of hours worked: ");
	scanf("%d", &hours); //take input of hours worked

	printf("\nEnter hourly rate of the worker ($00.00): ");
	scanf("%f", &wage); //take input of (non-overtime) hourly wage

	if(hours > normal_hours) // determine if the worker worked more than the non-overtime hours
	{
		gross_pay = (normal_hours * wage) + (((hours - normal_hours) * wage) * 1.5); // add the gross pay of the maximum amount of non-overtime hours to the exess hours multiplied by the hourly wage multiplied by 1.5
	}
	else
	{
		gross_pay = (hours * wage); //multiply the hours worked by the hourly wage
	}

	printf("Salary is $%.2f\n", gross_pay); //print the gross pay
	
	return 0;
}
