# include <stdio.h>

int main()
{
	int input = 0, sum = 0, sum_of_squares = 0, sum_of_cubes = 0;


	printf("%s", "Input an integer: ");
	
	scanf("%d", &input);
	
	for(int i = 1; i <= input; i++) //loop, incimenting by 1 from 1 to the input integer.
	{
		//for each value of i...

		sum += i; // add i to the sum
		sum_of_squares += (i * i); // add i^2 to the sum of squares
		sum_of_cubes += (i * i * i); // add i^3 to the sum of cubes
	}


	printf("the sum of all natural numbers from 1 to %d is: %d\n", input, sum);
	
	printf("the sum of all natural numbers squared from 1 to %d is: %d\n", input, sum_of_squares);
	
	printf("the sum of all natural numbers cubed from 1 to %d is: %d\n", input, sum_of_cubes);
	
	return 0;

}

