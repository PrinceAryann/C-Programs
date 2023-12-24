/*Write a program to take name, city, age as input from user and display the following record*/
#include<stdio.h>
int main(void)
{
	char name[30],city[30];
	int age;
	printf("Enter Name: ");
	gets(name);     /*scanf() is not used because it terminates at blank space but gets() does'nt so it is practical to use gets() to store full name in a variable.*/
	printf("Enter City: ");
	gets(city);
	printf("Enter Age: ");
	scanf("%d",&age);
	printf("\vPlease Wait............");
	sleep(2);          /*sleep() function pauses the program for provided number of instances.*/
	printf("\vThe record is: \n");
	printf("Name: %s\nCity: %s\nAge: %d",name,city,age);
}