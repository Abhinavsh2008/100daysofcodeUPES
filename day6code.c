//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
	{
        printf("%d is Even\n", num);
    } else 
	{
        printf("%d is Odd\n", num);
    }

    return 0;
}






//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
int n;
printf("enter number");
scanf("%d",&n);
if (n > 0)
{
	printf("n is positive");
}
else if ( n < 0)
{
	printf("n is negative");
}
else 
{
	printf("n is zero");
	}

return 0;
}