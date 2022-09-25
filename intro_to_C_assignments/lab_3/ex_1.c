# include <stdio.h>
# include <stdbool.h>

int main()
{
	char repeat = 'y', letter_grade = 'u';
	int grade = 0, sum = 0, entries = 0, average = 0;

	while(true)
	{
		printf("%s", "Input a grade: ");

		scanf("%d", &grade); // take an integer as a grade input

		sum += grade; //add the grade to the sum of all grades

		entries++; //add 1 to the number of grade entries

		printf("%s", "Enter another grade? (y/n); ");

		scanf(" %c", &repeat); //recieve input as to wether or not another grade should be taken

		if(repeat == 'n') //if 'n' (no), break the loop
		{
			break;
		}
	
	}


	average = sum / entries; //divide the sum of all grades by the number of entries to find the average grade


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
	} //use the if else example from lab_2 to show the letter grade alongside the average grade

	printf("the average grade is %d (%c)\n", average, letter_grade);

	return 0;

		
}
