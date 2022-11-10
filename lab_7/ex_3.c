# include <stdio.h>
# include <string.h>
# include <stdlib.h>


int main()
{
    char arrayOfStrings[5][20]; //create 2d array
    int numOfStrings = strlength(arrayOfStrings);

    for(int i = 0; i < numOfStrings; i++)
    {
        printf("input string %d: ", i + 1);
        char string[20];
        scanf("%s", string);
        stringLength = strlen(string)
        for(int j = 0; j <= stringLength; j++)
        {
            arrayOfStrings[i][j] = string[j];
        }

    } // take input of five strings and put them in the 2d array

    for(int i = 0; i < numOfStrings; i++)
    {
        char firstTwoLetters[3];// create a variable for the first two letters 
        sprintf(firstTwoLetters, "%c%c", arrayOfStrings[i][0],arrayOfStrings[i][1]); //
        if(!strcmp(firstTwoLetters, "Th"))
        {
            printf("%s\n", arrayOfStrings[i]);
        }
    }

}
