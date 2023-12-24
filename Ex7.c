/*Write a program that inputs one 4-digit number, 
sums each of the individual digits, and displays the result. 
[Hint: Use division and remainder operation]. 
For example, if the input is 1234, the output should be 10. 
(Explanation: 1 + 2 + 3 + 4 = 10).*/
#include <stdio.h>
void main()
{
	int num1,sum=0;
	printf("Enter a 4-digit number: ");
	scanf("%d",&num1);
	while(num1!=0)      /*Using the while statement to continue the loop untill the given number becomes 0*/
		{
			sum=sum+(num1%10);     /*The initial value of sum is 0 and the user input integer is divided by 10 and its remainder is added to the sum.*/
			num1=num1/10;       /*The input number is divided by 10 to get the quotent and replace the original number.*/
		}
	printf("\vXOXOXOXOXOXOXOXOXOXOXOXO\v");
	printf("\nSum of each of the individual digits is = %d",sum);
}