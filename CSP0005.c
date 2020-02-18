#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i,number;
    char choice;
    do{
    printf("\nPlease enter a number (1-9): "); 
	scanf("%d",&number);
    while(number < 1 || number > 9)
    {
        printf("Please enter a number (1-9): "); 
		scanf("%d",&number);
    }
    printf("Multiplication table for %d number\n",number);
    for(i=0;i<=10;i++)
    {
        printf("%d X %d = %d\n",number,i,i*number);
    }
    printf("\nPress enter to continue another reverse, ESC to exit ");
    choice = getch();
    }while(choice != 27);
    return 0;
}
