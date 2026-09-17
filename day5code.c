//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,si,ci;
printf("enter principal rate and time");
scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100;
printf("Simple interest %f",si);
ci=p*pow((1+r/100),t)-p;
printf("Compound interest %f",ci);


return 0;
}





//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main()
 {
    int seconds, hours, minutes;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600; 
    seconds = seconds % 3600;        
    minutes = seconds / 60;          
    seconds = seconds % 60;          
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
