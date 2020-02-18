#include <stdio.h>
#include <conio.h>
#define PI 3.14
#define IN_TO_MILE 0.000015

void calFE()
{
    double speed, gas, average;
    int minus;
   		printf("How many minutes did you drive?\n");
   		scanf("%d",&minus);
   		printf("What are the average speed of the car during that time?\n");
   		scanf("%lf",&speed);
    	printf("How many gallons of gas did your car use?\n");
    	scanf("%lf",&gas);
    printf("Your car average %.2lf miles per gallon.\n",minus*speed/gas/60);
}
void calDT()
{
    double rad;
    int revo;
	    printf("What is the radius of your tires, in inched?\n");
    	scanf("%lf",&rad);
	    printf("How many revolution did your car's tires make?\n");
    	scanf("%d",&revo);
    printf("Your car traveled %.2f miles.\n",rad*2*PI*revo*IN_TO_MILE);
}
void calRFEC()
{
    double rad, gas;
    int revo;
	    printf("What is the radius of your tires, in inches?\n");
    	scanf("%lf",&rad);
    	printf("How many revolution did your car's tires make?\n");
    	scanf("%d",&revo);
    	printf("How many gallons of gas did your car use?\n");
    	scanf("%lf",&gas);
    printf("Your car average %.2f miles per gallon.\n",rad*2*PI*revo*IN_TO_MILE/gas);
}
int main()
{
    int choice;
    /*Menu*/
    	printf("1 - Calculating Fuel Economy\n");
    	printf("2 - Calculating Distance Traveled\n");
    	printf("3 - Revised Fuel Economy Calculation\n");
    do{
    	printf("\nChoice feature: ");
    	scanf("%d",&choice);
    switch(choice)
    {
        case 1: calFE();break;
        case 2: calDT();break;
        case 3: calRFEC();break;
    }
    }while(choice >=1 && choice<4);
    getchar();
    return 0;
}
