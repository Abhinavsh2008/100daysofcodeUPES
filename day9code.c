//wap that accept a percentage and assingn a grade based on the criteria?
#include <stdio.h>
int main(){
    int percent;
    printf("enter your percentage:");
    scanf("%d",&percent);
    if(percent>=90 && percent<=100){
        printf("Grade-A");
    }
    else if(percent>=89 && percent<=80){
        printf("Grade-B");
    }
    else if(percent>=70 && percent<=79){
        printf("Grade-C");
    }
    else if(percent>=60 && percent <=69){
        printf("Grade-D");
    }
    else{
        printf("Grade-F");
    }
    return 0;
}




//solve for quadractic eqn?
#include<stdio.h>
#include<math.h>
	int main()
	{
	int d;
	int a,b,c;
	int r1,r2,r3,r4;
	
	printf("Now enter the values of a, b, c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	d=b*b - 4*a*c;
	printf("%d\n",d);

	if(d>0){
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b - sqrt(d))/(2*a);
		printf("The roots are real and different %d %d",r1,r2);
	}
	else if(d==0){
		r3 = -b/2*a;
		 
		printf("The roots are real and same %d",r3);
	}
	else{
		r4 = sqrt(-d)/2*a;
		printf("The roots are imaginary %d",r4);
	}
	
	return 0;
	}
