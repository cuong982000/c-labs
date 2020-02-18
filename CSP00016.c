#include <stdio.h>
#include <conio.h>
int main()
{
    double payment, interest, owed;
    int month = 1;
    /*Input amount, rate, payment*/
    printf("What is the value left on the morgage?\n");
    scanf("%lf",&owed);
    printf("What is the annual interest rate of the loan, in percent?\n");
    scanf("%lf",&interest);
    printf("What is the monthly payment?\n");
    scanf("%lf",&payment);
    /*Printing Payments and Calculating Total Expenditure*/

    interest = 1 + interest /12 /100;

    printf("\nMonth\tPayment\t\tAmount Owed\n");
    do{
        printf("-----------------------------------\n");
        owed = owed * interest - payment;
        printf("%d\t%.2lf\t\t%.2lf\n", month, payment, owed);
        if( owed < payment )
        {
            payment = owed * interest;
            owed = 0;
        }
        month++;
    }while( owed != 0 );
    printf("-----------------------------------\n");
    printf("%d\t%.2lf\t\t%.2lf\n", month, payment, owed);

    getchar();
    return 0;

}
