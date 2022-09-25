# include <stdio.h>

int main()
{
	int remainder = 0, input_integer = 0, divisor = 7; // initialize an integer variable for the remainder, input and the divisor (in case we want to change it to something else)

	printf("input an integer that will be divided by %d: ", divisor);
	scanf("%d", &input_integer); //assign the input integer to the variable input_integer


	remainder = input_integer % divisor; //use the modulus operator to find the remainder of input integer/divisor(7)

	switch(remainder) // use a switch to specify what to print depending on the remainder
	{
		case 0:
			puts("Nice");
			break;
		case 1:
		case 3:
			puts("Good");
			break;
		case 2:
			puts("Cool");
			break;
		case 4:
		case 5:
		case 6:
			puts("Well");
			break;
	}

	return 0;
}


