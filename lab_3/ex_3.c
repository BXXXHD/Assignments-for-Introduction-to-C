# include <stdio.h>


int main()
{
	
	int number = 0, largest = 0;

	for(int i = 0; i < 10; i++) //repeat 10 times
	{
		printf("input a positive integer (%d/10): ", i); //use the value of i to show the number of integers filled
		scanf("%d", &number);
		if(number > largest) //an if statement that determines if the current number is bigger than the previously recorded largest number
		{
			largest = number; //if so, assign the current number to the "largest" variable
		}
	}

	printf("the largest number was %d\n", largest); 

	return 0;

}


