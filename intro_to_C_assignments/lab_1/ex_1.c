# include <stdio.h>

int main ()
{
	int age = 0; //initialize a variable for age
	
	printf("%s", "Input your age: "); //ask the user their age

	scanf("%d", &age); // takes an integer as input

	printf("You are %d years old.\n", age); //prints "you are (age) years old
	
	return 0;
}
