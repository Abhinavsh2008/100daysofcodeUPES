//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
int n;
printf("enter number");
scanf("%d",&n);
if(n%400==0 ||n % 4==0 && n%100!=0 )
{
	printf("n is leap year");
}
else 
{
	printf("n is not leap year");
	}

return 0;
}




//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main()
{
char c;
printf("enter alphabet");
scanf("%c",&c);
if (c=='a' || c=='e' || c=='i' || c=='o'|| c=='u')
{
	printf("alph is vowel");
}
else 
{
	printf("alph is consonant");
	}

return 0;
}
