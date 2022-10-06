# include <stdio.h>
# define SIZE 10 //make a symbolic constant for size that is equal to 10

int main()
{
	int array[SIZE] = {5, 24, 76, 1, 8, 53, 40, 7, 33, 10}; // initialize an array with a size of 10
	
	int highest = 0, index_of_highest = 0, lowest = 0, index_of_lowest = 0;
	
	float sum = 0.0, average = 0.0;
	
	for(int i = 0; i < SIZE; i++) //create a for loop that goes through each integer in the array
	{
		if(array[i] > highest) // find the highest integer
		{
			highest = array[i];
			index_of_highest = i;
		}
		
		
		if(i == 0) // establish a baseline for the lowest value in the array
		{
			lowest = array[i];
		}

		if(array[i] < lowest)
		{
			lowest = array[i];
			index_of_lowest = i;
		}

		sum += array[i]; //add all of the integers in the array

	}

	average = sum / SIZE; //find the average

	printf("The highest value is %d at an index of %d. \nThe lowest value is %d at an index of %d.\n", highest, index_of_highest, lowest, index_of_lowest);

	printf("The average of all the numbers in the array is %f\n", average);


	return 0;
}





