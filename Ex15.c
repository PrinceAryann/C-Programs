/*Write a program to take a user input of name and age, displaying whether they are eligible for voting or not in the output.*/
#include<stdio.h>
int main(void)
{
	char name[30],city[30];
	int age;
	printf("Enter Name: ");
	gets(name);
	printf("Enter Age: ");
	scanf("%d",&age);
	printf("\vPlease Wait............");
	sleep(1);       /*sleep() function pauses the program for provided number of instances.*/
	if (age>=18)
	{
		printf("\n%s you are eligible to vote.",name);		
	}
	else
	{
		printf("\n%s you are not eligible to vote.",name);
	}
}