#include<string.h>
#include<stdio.h>
#include<conio.h>
#define MAX 100 /* size of string */

//This function is used to count the characters that appear.
void onetime(char str[])
{
    int a,b, count = 0;
    char characters;
    for(a=0 ;a<strlen(str); a++)
    {
        characters=str[a];
        for(b=0;b<strlen(str); b++)
        {
            if(str[b]== characters)
            {
                count = count + 1;
            }
        }
        if(count==1)
        printf("%c\t",str[a]); /* \t is space between letters */
        count =0;
    }
}

int main()
{

    int choice;
    do
    {
    char str[100];
    printf("\nPlease enter a string: ");
    gets(str);

    printf("Found characters: ");
    onetime(str);
    printf("\nPress enter to continue, Esc to exit ");
    choice = getch();
    }while(choice!=27);
    return 0;

}
