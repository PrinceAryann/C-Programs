/*Write a program that takes two integers as input from the user. 
And displays its Sum, Product, Difference, Quotient and Reminder as output.*/
#include<stdio.h>
int main(void)
{
	int n1,n2,sum,diff,pro,quo,rem;
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	sum = (n1+n2);      /*Implementing formulas to calculate Sum, Difference, Product, Quotient and Remainder.*/
	diff = (n1-n2);
	pro = (n1*n2);
	quo = (n1/n2);
	rem = (n1%n2);
	printf("Sum of %d and %d is %d\n",n1,n2,sum);
	printf("Difference of %d and %d is %d\n",n1,n2,diff);
	printf("Product of %d and %d is %d\n",n1,n2,pro);
	printf("Quotient of %d and %d is %d\n",n1,n2,quo);
	printf("Remainder of %d and %d is %d\n",n1,n2,rem);
}