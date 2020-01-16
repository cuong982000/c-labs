#include <stdio.h>
#include <string.h>
#include <conio.h>
int isLower(char c) /* c: ASCII character */
{
    return (c>='a'&&c<='z')?1:0;
}
int isUpper(char c)
{
    return (c>='A' && c<='Z')?1:0;
}
int toLower(char c)
{
    return c+=32; /* replace uppercase letters lowercase */
}
int toUpper(char c)
{
    return c-=32; /*replace lowercase letters with uppercase letters */
}

int main()
{
    char str[100];
    int a,b,key;

    do{
    printf("\nInput String: ");
    gets(str);

    b = strlen(str); /* reverse the string */

    for(a=0;a<=b;a++)
    {
        //replace lowercase letters with uppercase letters and vice versa
        if(isLower(str[a]) == 1)
            str[a] = toUpper(str[a]);
        else if (isUpper(str[a])== 1)
                 str[a] = toLower(str[a]);
    }
    printf("Reverse string: %s",strrev(str));
    printf("\nPress enter to continue, Esc to exit.");
    key = getch();
    }while(key!=27);
    return 0;
}
