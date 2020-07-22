#include <stdio.h>
#include <conio.h>

int main() //main method
{	int n, num1,num2,result; // declaring int n, num1, num2, & result
	char option; //where the loop starts again

do{
	printf("\n++++++++++++++Calculator MS-DOS Style Beep Beep lol++++++++++++++"); //title bar
	printf("\nWhat option do you want to do?\n"); //setting up instructions
	printf("press 1 for addition\n"); //instructions for #1 is addition
	printf("press 2 for subtration\n"); //instructions for #2 is subtractions
	printf("press 3 for multiplicaiton\n"); //instrcutions for #3 is multiplication
	printf("press 4 for division\n"); //instructions for #4 is division
	scanf(" %d)", &n); //scan for input of operation
	printf("\nplease enter a number "); //print instructions for entering number 1
	scanf("%d", &num1); //scan for number 1
	printf("\nPlease enter a second number "); //instuctions for entering number 2
	scanf("%d", &num2); //scan for number2
	switch(n) //switch to operation function
		{
		case 1:result=num1+num2; //addition operation of num1 & num2
			printf("addition of two numbers is %d", result); // print the text and results of the addition problem
			break;

		case 2:result=num1-num2; //subtraction operation of num1 & num2
			printf("subtraction of two numbers is %d", result);  //print the text and results of the subtraction problem
			break;
		case 3:result=num1*num2; //multiplicaiton operation of num1 & num2
			printf("multiplication of two numbers is %d", result); //print the text and results of the multiplication problem
			break;
		case 4:result=num1/num2; //division operation of num1& num2
			printf("division of two numbers is %d", result); //print the text and results of the division problem
			break;
		default:printf("\nwrong input dummy beep beep l0L"); //wrong input dummy
		}
	printf("\nDo you want to continue y/n?\n"); //option to continue text
	option = getche(); //creating the option to continue
	}while(option=='y'); //setting the option to continue if input = y
	getche(); //return to line 9
	return 0;
}
