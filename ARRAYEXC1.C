/* This program will ask the user  numbers, and then it will order them
 * and also in reverse order.
 *
 * Alejandra Chavez Cruz
 * A01411970@itesm.mx
 * 15/oct/18
*/
//library
#include <stdio.h>

int main() {
    //declaration of variable
    int a;


    //Ask to the user how many numbers wants to use
    printf("Hi. How many numbers would you like? \n");
    scanf("%i", &a);

    int num [a];

    //Ask for the numbers that the user wants
    for (int k=0; k<a; k++) {
        printf("Give me the  numbers would you like:   \n");
        scanf("%i", &num[k]);
    }

    printf("\n");
    //Print the numbers in the correct order
    printf("The numbers you choose are: \n");
    for (int k=0; k<a; k++) {
        printf("\t%i", num[k]);
    }
    printf("\n");
    printf("\n");

    //print the numbers in reverse
    printf("The numbers you choose in opposite order are: \n");
    for (int k=a; k>0; k--) {
        printf("\t%i", num[k-1]);
    }

    printf("\n");


    return 0;
}