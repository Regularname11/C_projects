#include <stdio.h>

int main() {

    char color[20];
    char pluralNoun[20];
    char celebrityFirstName[20];
    char celebrityLastName[30];


    printf("Enter a color: ");
    scanf("%s", &color);

    printf("Enter a plural noun: ");
    scanf("%s", &pluralNoun);

    printf("Enter a celebrity name: ");
    scanf("%s%s", &celebrityFirstName, &celebrityLastName);

    printf("Roses are %s \n" , color);
    printf("%s are crazy \n" , pluralNoun);
    printf("%s %s is fabulous \n" , celebrityFirstName, celebrityLastName);

    return 0;
}