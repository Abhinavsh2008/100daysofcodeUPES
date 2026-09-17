//Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>
    int main()
    {
        int a , i , digits=0 , last , place=1 , first , temp , middle , swapped ;
        printf("Enter a mumber :- ");
        scanf("%d",&a);
        
        temp = a;
        last = temp%10;
        while(temp!=0)
        {
            first = temp;
            temp /= 10;// assigning last digit value to the first place
            digits++;
        }
        for(i=1 ; i<digits ; i++)
        {
            place = place*10;
        }
        middle = (a%place) / 10;
        swapped = last*place + middle*10 + first;
        printf("\n%d",swapped);

        return 0;
    }

//Q42: Write a program to check if a number is a perfect number.

#include<stdio.h>
    int main()
    {
        int a , i , sum=0 ;
        printf("Enter a number :- ");
        scanf("%d",&a);

        for(i=1 ; i<=a/2 ; i++)
        {
            if(a%i == 0)
            {
                sum=sum+i;
            }
        }
            if(sum == a)
            {
                printf("\nPerfect number");
            }
            else
            {
                printf("\nNot perfect number");
            }
            return 0 ;
        
    }



    