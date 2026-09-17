//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>
    int main()
    {
        int a , i , numtr , demtr ;
        double sum=0.0 ;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        
        for(i=1 ; i<=a ; i++)
        {
            numtr = 2*i;
            demtr = 4*i-1;
            sum = sum+(double)numtr/demtr;
        }
        printf("%.1f",sum);
        
        return 0;
    }
    



    /*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include<stdio.h>
    int main()
    {
        int a , i ;

        for(i=1 ; i<=5 ; i++)
        {
            printf("*****\n");
        }
        return 0;
    }