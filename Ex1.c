/*Write a Program to convert the Fahrenheit Scale Temperature to Celsius Scale Temperature.*/
int main(void)
{
    float temp;
    printf("Enter Fahrenheit Temperature: ");
    scanf("%f",&temp);
    printf("The Fahrenheit Scale Temperature is %f°F.\n");
    temp=(temp-32)*5/9;     /*Formula of conversion of Fahrenheit to Celsius Scale.*/
    printf("Loading.................\n");
    printf("The Celsius temperature is %f°C.\n",temp);
}