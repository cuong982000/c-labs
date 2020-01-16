#include<stdio.h>
#include<string.h>
#include<conio.h>

int isAlpha(char c) /* c: ASCII character */
{
    if ((c>='a' && c<='z')||(c>='A'&& c<='Z'))
        return 1;
    return 0;
}

int isUpper(char c)
{
    return (c>='A' && c<='Z')?1:0;
}
char isLower(char c)
{
    if (isUpper(c) == 1)
        return c += 32;
    return c;
}

int main()
{
    char str[100];    /* size of string is 100 */
    int freq[26]={0}; /*Array of 26 lowercase letters */
    int a,len;

    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    for( a= 0; a< len; a++) /* Count the number of the appearance of letters */
    {
        if (isAlpha(str[a]) == 1)
        {
            if (isUpper(str[a]) == 1)
                str[a] = isLower(str[a]);
            freq[str[a] - 'a']++;
        }
    }
    for( a= 0; a< 26; a++)
        if (freq[a])
            printf("\t%c: %d\n",a + 'a',freq[a]); /* out put result */
    getchar();
    return 0;
}
