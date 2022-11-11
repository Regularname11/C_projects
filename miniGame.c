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

    printf("Roses are %s: " , color);
    printf("%s are : " , pluralNoun);
    printf("%s %s is fabulous: " , celebrityFirstName, celebrityLastName);

    return 0;
}