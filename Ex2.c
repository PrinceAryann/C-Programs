/*Write a Program to convert the Celsius Scale Temperature to Fahrenheit Scale Temperature.*/
#include<stdio.h>
int main(void)
{
    float temp;
    printf("Enter Celsius Temperature: ");
    scanf("%f",&temp);
    printf("The Celsius Scale Temperature is %f°C.\n");
    temp=(temp*9/5)+32;     /*Formula of conversion of Celsius to Fahrenheit Scale.*/
    printf("Loading.................\n");
    printf("The Fahrenheit Temperature is: %f°C.\n",temp);
}