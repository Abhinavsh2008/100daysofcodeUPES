//Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>
int main()
{
int a,b,sum;
printf("enter two num");
scanf("%d%d",&a,&b);
sum=a+b;
printf("the sum is%d",sum);
return 0;
}



//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
int main()
{
int a,b,sum,diff,product,quotient;
printf("enter two num");
scanf("%d%d",&a,&b);
sum=a+b;
printf("the sum is%d",sum);
diff=a-b;
printf("the diff is%d",diff);

product=a*b;
printf("the product is%d",product);

quotient=a/b;
printf("the quotient is%d",quotient);

return 0;
}