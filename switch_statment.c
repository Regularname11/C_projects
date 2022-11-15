#include <stdio.h>

int main() {

    char grade;

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    switch (toupper(grade))
    {
     case 'A':
     //case 'a':
        printf("You did GREAT!!");
        break;
     case 'B':
     //case 'b':
        printf("You did well :)");
        break;    
     case 'C':
     //case 'c':
        printf("You did okay.");
        break;
     case 'F':
     //case 'f':
        printf("HYL! :(");
        break;   
     default:
        printf("Invalid Grade!");
        break;
    }


    

    return 0;
}