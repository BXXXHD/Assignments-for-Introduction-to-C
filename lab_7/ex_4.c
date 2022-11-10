
# include <stdio.h>
# include <string.h>
# include <stdlib.h>


int main()
{
    char arrayOfStrings[5][20]; //create 2d array

    for(int i = 0; i <= 4; i++)
    {
        printf("input string %d: ", i + 1);
        char string[20];
        scanf("%s", string);
        for(int j = 0; j <= strlen(string); j++)
        {
            arrayOfStrings[i][j] = string[j];
        }

    } // take input of five strings and put them in the 2d array

    for(int i = 0; i <= 4; i++)
    {
        char lastFourLetters[5];// create a variable for the first two letters
        int length = strlen(arrayOfStrings[i]) - 1;// establish the last character  
        sprintf(lastFourLetters, "%c%c%c%c", arrayOfStrings[i][length - 3],arrayOfStrings[i][length - 2],arrayOfStrings[i][length - 1],arrayOfStrings[i][length]); //create a string of the last four characters
        if(!strcmp(lastFourLetters, "tion")) //compare the string to the requirements and print it if they are the same
        {
            printf("%s\n", arrayOfStrings[i]);
        }
    }

}