#include <stdio.h>

int main() {
    double number1;
    double number2;

    printf("Enter your first number: ");
    scanf("%lf", &number1);

    printf("Enter your second number: ");
    scanf("%lf", &number2);


    printf("The sum of the two numbers is %f: ", number1 + number2);

    return 0;
}