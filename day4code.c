//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Input two number:");
    scanf("%d%d",&a,&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swaped numbers: %d %d",a,b);
    return 0;


}





//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main()
{
int n;
int sum=0;
printf("enter number");
scanf("%d",&n);
sum=n*(n+1)/2;
printf("sum %d",sum);


return 0;
}
