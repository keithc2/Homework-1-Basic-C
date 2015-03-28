//Keith Crosby
//September 7th 2010
//This program asked the user a multiple question then tells the user what they typed in

#include<stdio.h>

int main (void)
{
        char x; //declaration of a characte

        printf("How many bits in 1MB?\n"); //prints the question
        printf("a 1,000 bits\n");
        printf("b 1,024 bits\n");
        printf("c 8,192 bits\n");
        printf("d 100 bits\n"); //prints the choices
        scanf("%c", &x); //holds the choosen answer
        printf("You selected %c\n", x); //prints the choosen answer
        printf("The correct answer is c\n");
        return (0);
}