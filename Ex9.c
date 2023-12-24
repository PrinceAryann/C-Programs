/*Write a program that asks the user to input a letter and gives the integer representation of the letter as output.*/
#include<stdio.h>
int main(void)
{
	char a;
	printf("Enter a letter: ");
	scanf("%c",&a);    /* %c scans the input as character and stores it in the a variable.*/
	printf("The integer representation is %c = %d",a,a);    /* %c fetches the value stored in variable a and %d converts the data stored in variable a into numerical form.*/
}