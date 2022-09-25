# include <stdio.h>

int main ()
{
	int  a = 0, b = 0, c = 0, d = 0, e = 0; //initialize all of the integers
	float solution = 0.0; //initialize the float for the solution

	printf("%s", "Input a: "); // ask for an input
	scanf("%d",&a); //recieve integer input and store it in the corresponding variable
	
	// repeat for all other variables

	printf("%s", "Input b: ");
	scanf("%d",&b);
	
	printf("%s", "Input c: ");
	scanf("%d",&c);
	
	printf("%s", "Input d: ");
	scanf("%d",&d);
	
	printf("%s", "Input e: ");
	scanf("%d",&e);

	solution = ((float)a / b) + ((c + d) / (float)e); //calculate the solution to the formula using the variables

	printf(" %d     %d + %d\n", a, c, d); // print the solution by utilizing new lines, spaces, and hyphens
	printf("--- + ------- = %f\n", solution);
	printf(" %d       %d\n", b, e);

	return 0;



}

