//Keith Crosby
//September 7th 2010
//The user gives a radius of a circle
//Using the equations C=2.0*y*x and A=y*x*x it is determined what the circumference and the area of the circle with the given radius

#include<stdio.h>

int main (void)
{
        int x; //this is the radius given by the user
        float y; //is equal to PI
        float z; //is equal to the circumference
        float a; //is equal to the area

        y=3.14159;
        printf("Enter the radius of a circle\n");
        scanf("%d", &x);
        z=2.0*y*x; //equation to find the circumference
        a=y*x*x; //equation to find the area
        printf("The circumference of a circle with a radius %d ft is equal to %1.2f ft\n", x, z); //prints the radius and the circumference
        printf("The area of a circle with a radius %d ft is equal to %1.2f ft\n", x, a); //prints the radius and the area
        return (0);
}