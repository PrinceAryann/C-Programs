/*Write a C program that takes input of name, 
semester and marks of 5 subjects from user and displays the name,
semester, total and average marks.*/
#include<stdio.h>
int main(void)
{
	char name[100];
	int sem,s1,s2,s3,s4,s5,total,avg;
	printf("Enter Name: ");
	gets(name);     /*scanf() is not used because it terminates at blank space but gets() does'nt so it is practical to use gets() to store full name in a variable.*/
	printf("Enter Semister No.: ");
	scanf("%d",&sem);
	printf("Enter marks in Subject 1: ");
	scanf("%d",&s1);	
	printf("Enter marks in Subject 2: ");
	scanf("%d",&s2);
	printf("Enter marks in Subject 3: ");
	scanf("%d",&s3);
	printf("Enter marks in Subject 4: ");
	scanf("%d",&s4);
	printf("Enter marks in Subject 5: ");
	scanf("%d",&s5);
	total=(s1+s2+s3+s4+s5);     /*Implementing the addition of marks.*/
	avg=(total/5);	            /*Implementing the formula for average.*/
	printf("\v\nData is being Processed.....\nData Processed is........\v");
	printf("Name = ");
	puts(name);         /*puts() fetches the character data stored in the variable.*/
	printf("Semister = %d\n",sem);
	printf("Total Marks = %d\n",total);
	printf("Average Marks = %d\n",avg);
}