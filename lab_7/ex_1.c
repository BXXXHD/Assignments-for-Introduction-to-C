# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include <stdlib.h>

bool isPalindrome(char  word[]); //prototype isPalindrome function


int main()
{ 	char string[20]; //initialize a string for the input word
	printf("%s", "input a word and press enter to check if it is a palindrome: ");
	scanf("%s", string);
	if(isPalindrome(string)) //use the boolean output of the isPalindrome function to print an answer
	{
		printf("%s is a palindrome!\n", string);
	}
	else
	{
		printf("%s is not a palindrome...\n", string);
	}

}



bool  isPalindrome(char  word[])
{
	int from_left = 0, from_right; // initialize variables
	from_right  = strlen(word) - 1; // set the from_right at the last character (one before NULL) 

	for(int i = 0; i <= from_right / 2; i++) //iterate from 0 to the middle of the word
	{
		if (word[from_left] != word[from_right])// test if the first and last letter are the same
		{
			return false;// if not return false and exit function
		}
		else // if so...
		{
			from_left++; // move each index closer to the center
			from_right--;
		} //repeat the test with the new index
	}
	return true; // if all tests return !false, return true
}
