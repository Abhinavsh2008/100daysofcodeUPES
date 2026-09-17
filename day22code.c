//Q43: Write a program to check if a number is a strong number.

#include<stdio.h>
    int main()
    {
        int a , sum=0 , original , rem , fact , i ;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        original = a;
        while(a!=0)
        {
            rem = a%10;
            fact = 1;

            for(i=1 ; i<=rem ; i++)
            {
                fact = fact*i;
            }
            sum = sum+fact;
            a = a/10;
        }
        if(sum == original)
        {
            printf("\nStrong number");
        }
        else
        {
            printf("\nNot strong number");
        }
        return 0;


    }



    //Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>
    int main()
    {
        int a , i , numtr , demtr ;
        double sum=0.0 ;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        sum = 1.0;
        for(i=2 ; i<=a ; i++)
        {
            numtr = 2*i-1;
            demtr = 2*i;
            sum = sum+(double)numtr/demtr;
        }
        printf("%.1f",sum);
        
        return 0;
    }
    
