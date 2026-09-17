/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include<stdio.h>
int main()
    {
        int i=5 , j ;
       

        for(i=5 ; i>=1 ; i--)
        {
            for(j=i ; j<=5 ; j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        return 0;
    }




    /*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>
    int main()
        {
            int a=5;//number of rows
            int i;
            int j;
            int s;//space
            
            for(i=5 ; i>=1 ; i--)
            {
                for(s=0;s<=a-i;s++)
                {
                    printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
                    
                    printf("\n");
            }
            
            return 0;

        }
    