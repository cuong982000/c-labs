#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 /* size of string */

char * removeBlanks(const char * str); /* Function pointer notation */
int main()
{
    char str[MAX_SIZE];
    char * newString;

    printf("Enter a string: ");
    gets(str);
    newString = removeBlanks(str);
    printf("\nString after removing blanks: %s", newString);
    return 0;
}

char * removeBlanks(const char * str)
{
    int a, b;
    char * newString;
    newString = (char *)malloc(MAX_SIZE);
    a = 0;
    b = 0;

    while(str[a] != '\0') /* If blank space is found */
    {
        if(str[a] == ' ')
        {
            newString[b] = ' ';
            b++;
            while(str[a] == ' ') /* Skip all consecutive spaces */
            a++;
        }
        newString[b] = str[a];
        a++;
        b++;
    }
    newString[b] = '\0';
    return newString;
}
