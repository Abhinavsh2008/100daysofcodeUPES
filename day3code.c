//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float c, f;
    printf("enter temperature in celsius: ");
    scanf("%f", &c);
    f = (9.0f / 5.0f) * c + 32.0f;
    printf("Temp in Fahrenheit: %f\n", f);
    return 0;
}




//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input two number:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swaped numbers: %d %d",a,b);
    return 0;


}