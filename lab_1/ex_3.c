# include <stdio.h>

int main ()
{
	float length = 0.0, width = 0.0; // initialize the variables for length and width
	
	printf("%s","Input the length and width of the rectangle seperated by a space: ");
	scanf("%f%f", &length, &width); //accepth the length and the width seperated with spaces 
					//and assign them to length and width


	float area = ((float)length * width); //initialize a variable for area and multiply the length by the width to get the area

	printf("the area of the rectangle is %f\n", area); // print the area of the rectangle

	return 0;



	

}
