# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void printLatinWord(char word[]);

int main()
{ 
    char eng_phrase[] = "the quick brown fox jumps over the lazy dog"; //initialize a variable with the original string

    printf("%s\n", eng_phrase); // print the original string for reference

    char *tokenPtr = strtok(eng_phrase, " "); //tokenize the string at all spaces

    while(tokenPtr != NULL) //until the end of the string
    {
        printLatinWord(tokenPtr); // send the word to a printLatinWord function
        tokenPtr = strtok(NULL, " "); // move to the next word
    }
    puts("");

}

void  printLatinWord(char  word[])
{
    char firstChar[2]; //create a string to hold the first character
    sprintf(firstChar, "%c", word[0]); // take the first character and "print" it to the string 
    char wordBase[20]; //create a string to hold the base of the word (original word minus first character)
    strcpy(wordBase, word + 1); //use strcpy to add that to wordBase

    char pigLatinWord[24]; // create a string for the final pig latin word

    strcpy(pigLatinWord, strcat( strcat(wordBase, firstChar), "ay"));// use strcat to put the three pars together in order, and copy them to the final string

    printf("%s ", pigLatinWord); //print the word
    // printf("%s ", word);

}