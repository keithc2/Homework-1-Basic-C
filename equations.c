//Keith Crosby
//September 7th 2010
//Given two numbers, this program will give the following in a neat arrangment the two numbers the user choose, the sum, product, and quotients of the two numbers
//Also it will give the remainder of the first number divided by 7 and will plug the numbers into an equation

#include<stdio.h>

int main (void)
{
        int x; //the first number inputed by the user
        int y; //the second number inputed by the user
        float sum, product, quotient, remainder, expression; //declaration of several variables

        printf("Enter your first number\n");
        scanf("%d", &x); //holds the first number int
        printf("Enter your second number\n");
        fflush(stdin); //cleans out the previous number so the second can be stored
        scanf("%d", &y); //storage of the second number int

        sum=(x+y);  //equation to find the sums
        product=(x*y); //equation to find the product
        quotient=(x/y); //equation to find the quotient
        remainder=(x%7); //first number divided by 7
        expression=((x*2.0)+((y/7.0)*8.0)); //the given expression/equation
        printf("____________________________________\n");
        printf("x                              :%d\n", x); //print of given numbers
        printf("y                              :%d\n", y);
        printf("sum                            :%1.2f\n", sum); //prints the sum
        printf("product                        :%1.2f\n", product); //prints the product
        printf("quotient                       :%1.2f\n", quotient); //prints the quotient
        printf("remainder                      :%1.2f\n", remainder); //prints the remainder
        printf("expression                     :%1.2f\n", expression); //prints the answer to the expression
        printf("____________________________________\n");
        return (0);
}