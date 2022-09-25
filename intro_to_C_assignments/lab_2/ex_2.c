# include <stdio.h>
# include <stdbool.h>

int main ()
{
	int val_1, val_2; //declare two variables
	
	printf("%s","input two integers:");
	scanf("%d%d", &val_1, &val_2); // assign the two variables to the input integers

	if (val_1 == val_2) // make sure that the two values are not equal
	{
		puts("Both values are equal");
	}
	else
	{
		if (val_1 < val_2) // print value_1 if it is 
		{
			printf("%d\n",val_1);
		}
		else
		{
			printf("%d\n",val_2);
		}
	}

	return 0;
}
