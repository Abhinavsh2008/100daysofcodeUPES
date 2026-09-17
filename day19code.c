//Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>
    int main()
    {
        int a , b , i , hcf , lcm ;
        printf("Enter thr value of a and b :- ");
        scanf("%d%d",&a,&b);

        for(i=1 ; i<=a && i<=b ; i++)
        {
           if(a%i == 0 && b%i == 0)
           {
            hcf = i;
           } 
        }
            lcm = (a*b)/hcf;//It is th ecommon formula to find lcm
            printf("%d",lcm);

        return 0;
    }



    //Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>
    int main()
    {
        int a , sum=0 , rem ;

        printf("Enter the value of a :- ");
        scanf("%d",&a);

        while(a!=0)
        {
            rem=a%10;
            sum=sum+rem;
            a=a/10;
        }
        printf("%d is the sum of digits of the entered number",sum);

        return 0;

    }
