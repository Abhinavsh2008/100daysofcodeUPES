//Q39: Write a program to find the product of odd digits of a number.

#include<stdio.h>
    int main()
    {
        int a , foundOdd=0 , product=1 , digit;
        printf("Enter a number :- ");
        scanf("%d",&a);

        while(a!=0)
        {
        digit = a%10;
        if(digit%2 != 0)
        {
            product *= digit;
            foundOdd = 1;
        }
        a = a/10;
        }
        if(foundOdd)
        {
        printf("%d",product);
        }
        else
        {
            printf("\nNo odd digit found");
        }
        return 0;

    }





    //Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
    int main()
    {
        int a ;
        char binary[100];
        printf("Enter an binary number :-");
        scanf("%s",binary);
        
        printf("1's complement :- ");
        for(a = 0 ; binary[a]!='\0' ; a++)
        {
            if(binary[a] == '0')
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

        }
        return 0;

    }