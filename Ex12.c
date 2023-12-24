/*

Write a C program to print half pyramid pattern of desired no of rows
*
**
***
****

*/

#include<stdio.h>
int main(void)
{
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	int i=1;
	while (i<=rows)
	{
		int j=1;
		while (j<=rows)     /*creating a loop untill the value of j does'nt exceeds number of rows.*/
		{
			if(j<=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			j++;        /*Incrementing the value of j by 1.*/
		}
		printf("\n");
		i++;
	}
}