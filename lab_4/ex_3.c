# include <stdio.h>
# define SIZE 10 //define a static constant for the size of the array


int main()
{
	int arr[SIZE] = {2,5,4,7,5,-3,5,7,8,-1}; //initialize arbitrary array with two negative numbers
	
	int negative_1 = 0, negative_1_index = 0, negative_2 = 0, negative_2_index = 0; //assign variables for the first and second negative numbers along with their indexes 
	
	puts("original array:");

	for(int i = 0; i < SIZE; i++) // show the original array for context
	{
		printf("%d ",arr[i]);
	}
	
	printf("%s","\nwith negatives switched:\n");

	for(int i = 0; i < SIZE; i++) // go through the array
	{
		if(arr[i] < 0 && negative_1 == 0) //find the first negative number 
		{
			negative_1 = arr[i];
			negative_1_index = i;
		}
		else if(arr[i] < 0) // finds the second negative number when the first is found
		{
			negative_2 = arr[i];
			negative_2_index = i;
		}

	}

	arr[negative_1_index] = negative_2; //switch the numbers in the array
	arr[negative_2_index] = negative_1;
        
	for(int i = 0; i < SIZE; i++) // print the new array
	{
		printf("%d ",arr[i]);
	}

	return 0;

}
