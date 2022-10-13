# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

//prototype all of the functions

int max2( int a, int b);
int max3 (int a, int b, int c);
int circleInformation (int radius);
int drawRectangle (int width, int height);
int drawRectangle2 (int width, int height, char symbol);
int difference3 (char char1, char char2, char char3);
int countDigits (int digit_int);

int main()
{
	//initialize variables for function testing
	int num1 = 0, num2 = 0, num3 = 0, radius = 0, width = 0, height = 0, digit_int = 0;
	char symbol = '*', char1 = 'a', char2 = 'a', char3 = 'a';
	bool is_spaced_three = false;
	//test the max2() function
	printf("%s","Input two different integers seperated by a space: ");
	scanf("%d%d", &num1, &num2);
	printf("%d is the greater of those two integers.\n", max2(num1, num2));
	//test the max3() function
	printf("%s","input one more unique integer: ");
	scanf("%d", &num3);
	printf("%d is the greatest of all of the integers you have entered so far!\n", max3(num1, num2, num3));
	//test the circleInformation() function
	printf("%s","Now, enter the radius of a circle in centimeters (as an integer): ");
	scanf("%d", &radius);
	circleInformation(radius);
	//test the drawRectangle() function
	puts("Enter the width and height of a rectangle");
	printf("%s", "W: ");
	scanf("%d", &width);
	printf("%s", "H: ");
	scanf("%d", &height);
	drawRectangle(width, height);
	//test the drawRectangle2() function
	printf("%s", "Choose a character to draw the rectangle with: ");
	scanf(" %c", &symbol);
	drawRectangle2(width, height, symbol);
	//test the difference3() function
	while( is_spaced_three == false)
	{
		printf("%s", "input three characters that are spaced by three: ");
		scanf(" %c %c %c", &char1, &char2, &char3);
		is_spaced_three = difference3(char1, char2, char3);
		if(is_spaced_three == false)
		{
			puts("Sorry, try again...");
		}
	}
	puts("Good job!");
	//test the countDigits() function
	printf("%s", "Enter an integer: ");
	scanf("%d", &digit_int);
	printf("%d has %d digits.\n", digit_int, countDigits(digit_int));
	puts("All tests complete!");



	return 0;
}

int max2 (int a, int b)
{

	if(a < b) //return b if a < b
	{
		return b;
	}

	return a;
}


int max3 (int a, int b, int c)
{

	int max_ab = max2 (a, b); //use max2() function to find the greater of the first two intergers

	if(max_ab < c) //return c if it is greater than the output of max2()
	{
		return c;
	}

	return max_ab;
}


int circleInformation (int radius)
{
	float area = 0, circumference = 0, pi = 3.14;

	// calculate the area and circumference of the circle

	area = pi * (radius * radius);
	circumference = 2 * pi * radius;

	//print the results

	printf("The circumference is %.2f cm and the area is %.2f cm^2.\n", circumference, area);

	return 0;
}


int drawRectangle (int width, int height)
{
	char symbol = '*';

	for (int i = 0; i < height; i++) // draw lines equal to the height
	{
		for(int i = 0; i < width; i++) // make the length of lines equal to the width
		{
			printf("%c ", symbol);
		}
		printf("%s", "\n");

	}
	return 0;
}



int drawRectangle2 (int width, int height, char symbol)
{
        // do the same as before, but with the symbol defined in the function input

	for (int i = 0; i < height; i++)
	{
		for(int i = 0; i < width; i++)
		{
			printf("%c ", symbol);
		}
		printf("%s", "\n");

	}
	return 0;
}


int difference3 (char char1, char char2, char char3)
{
	if(((char2 - char1 == 3) == true )&& ((char3 - char2 == 3) == true)) //find if the difference of char1 - char2 is 3. do the same with char3 and char2. if both are true, return true 
	{
		return true;
	}

	return false;
}


int countDigits (int digit_int)
{
	int number_of_digits = 1; // set the initial number of digits to 1
	
	digit_int = abs(digit_int);

	while( digit_int > 9) // as long as the ineger is greater than 9, divide by 10 and add one to the number_of_digits counter
	{
	digit_int = digit_int / 10;
	number_of_digits++;

	}

	return number_of_digits;
}
