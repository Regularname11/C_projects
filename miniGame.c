#include <stdio.h>

int main() {

    char color;
    char pluralNoun;
    char celebrityFirstName;
    char celebrityLastName;


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