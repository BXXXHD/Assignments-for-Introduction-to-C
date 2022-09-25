# include <stdio.h>

int main()
{
	float grade = 0; // initialize a float for the grade out of 100
	char letter_grade = 'U'; // initialize a char for the letter grade

	printf("%s", "Input grade (out of 100): ");
	scanf("%f", &grade); //ask for the grade input and assign it to grade
	
	if (grade >= 90) // use an if statement to test if grade is greaterthan or equal to 90
	{
		letter_grade = 'A'; //assign the correct character to the letter_grade variable
	}
	else if(80 <= grade) // use else if and a logical and statement to determine if the number is greater than or equal to 80 and less than 90
	{
		letter_grade = 'B';
	}
	else if(70 <= grade)
	{
		letter_grade = 'C';
	}
	else if(60 <= grade)
	{
		letter_grade = 'D';
	}
	else //if the grade is less than 60, the grade is an F
	{
		letter_grade = 'F';
	}

	printf("Your grade is: %c\n", letter_grade); //print a string that shows what your letter grade is

	return 0;

}
