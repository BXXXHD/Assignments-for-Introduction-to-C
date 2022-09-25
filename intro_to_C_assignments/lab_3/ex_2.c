# include <stdio.h>

int main()
{
	char repeat = 'y', letter_grade = 'u';
	int grade = 0, sum = 0, entries = 0, average = 0;

	while(repeat != 'n') //as long as repeat is not 'n', the loop continues
	{
		printf("%s", "Input a grade: ");
		scanf("%d", &grade);
		sum += grade;
		entries++;
		printf("%s", "Enter another grade? (y/n); "); 
		scanf(" %c", &repeat); // use a char variable to store the answer for (y/n). if repeat = 'n', end the loop.
	}


	average = sum / entries;


	if (average >= 90) 
	{
		letter_grade = 'A';
	}
	else if(80 <= average) 
	{
		letter_grade = 'B';
	}
	else if(70 <= average)
	{
		letter_grade = 'C';
	}
	else if(60 <= average)
	{
		letter_grade = 'D';
	}
	else 
	{
		letter_grade = 'F';
	}

	printf("the average grade is %d (%c)\n", average, letter_grade);

	return 0;

		
}
