//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int length,breadth,Area,perimeter;
    printf("Enter Length and Breadth");
    scanf("%d%d",&length,&breadth);
    perimeter=2*(length+breadth);
    printf("Perimeter of rectangle:- %d\n",perimeter);
    Area=length*breadth;
    printf("Area of rectangle:-%d",Area);
    return 0;
    

}





//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int radius,Area,circumference;
    printf("Enter Radius");
    scanf("%d",&radius);
    circumference=2*3.14*radius;
    printf("Circumference of circle:- %d\n",circumference);
    Area=3.14*radius*radius;
    printf("Area of circle:- %d",Area);
    return 0;
}