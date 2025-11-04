/*
Name: Brandon Moses Owino
Reg no: PA106/G/28803/25
Description:A programm to request the user to enter hours worked in a week and 
              the hourly wage and display the gross_pay,taxes and net pay

*/

# include<stdio.h>

int main(){
	
	int hours;
	float gross_pay,wage,tax;
	
	printf("\nEnter hours worked in a week\n");
	scanf("%d",&hours);
	printf("Enter hourly wage\n");
	scanf("%f",&wage);
	
	if(hours <= 40){
      gross_pay = hours * wage;}
      
     if(hours > 40){
     	gross_pay = (40 * wage) + (1.5 * wage * hours);}
     printf("\nYour gross pay is %.2f",gross_pay);
	 
	 tax = (15/100 * 600) + ((20/100)	* (gross_pay - 600));{
	 printf("\nYour tax is %.2f",tax);}
	 
	 return 0;
	 
}

