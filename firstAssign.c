// Online C compiler to run C program online
#include <stdio.h>

int main() {
    double number;
    char alphabet;

    printf("Enter double input: ");
    scanf("%lf", &number);/*&number (called pointer)*/
    printf("Double number you entered is: %lf", number);

   /* printf("\n Enter a name: ");
    scanf("%c", &alphabet);
    printf("\n the name you entered is: %c", alphabet); */


    return 0;
}