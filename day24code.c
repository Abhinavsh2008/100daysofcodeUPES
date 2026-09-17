/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include<stdio.h>
    int main()
    {
        int a , i , j ;
        printf("Ente rnumber of rows :- ");
        scanf("%d",&a);

        for(i=1 ; i<=a ; i++)
        {
            j=1;
            while(j<=i)
            {
                printf("%d",j);
                j++;
            }
            printf("\n");
        }
        return 0;
    }



    /*Q47: Write a program to print the following pattern:
*
**
***
****
*****
*/

#include<stdio.h>
    int main()
    {
        int a , i , j;
        printf("Enter the number of rows :- ");
        scanf("%d",&a);

        for(i=1 ; i<=a ; i++)
        {
            for(j=1 ; j<=i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0 ;
    }
