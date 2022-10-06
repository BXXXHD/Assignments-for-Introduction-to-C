# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define SIZE 100
# define RANGE 9 //create static constants for the array size and the range of numbers in the array


int main()
{
	srand(time(NULL)); // for random number generation

	int rnd_array[SIZE] = {0}; //create an array of 100 zeros to be filled with random numbers
	int ammounts[RANGE] = {0}; //create an array of 9 zeroes to record the ammount of each integer in the array

	
	for(int i = 0; i < SIZE; i++) // for loop for every random integer
	{
		rnd_array[i] = (rand() % (RANGE + 1)); //create a random integer between 0 and 9 

		ammounts[rnd_array[i]]++; //use the random integer as the index for the ammount array and add one

	}	


	printf("%s","In the randomly generated array: {"); //print the array

	for(int i = 0; i < SIZE; i++)
	{
		if(i < (SIZE - 1))
		{
			printf("%d, ", rnd_array[i]);
		}
		else
		{
			printf("%d]\n", rnd_array[i]);
		}
	}
	
	

	for(int i = 0; i <= RANGE; i++) // print the prevalance of each integer
	{
		printf("%d shows up %d times\n",i, ammounts[i]);
	}

	return 0;

}

