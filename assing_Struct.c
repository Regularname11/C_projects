#include <stdio.h>


struct Console {
    char name[25];
    char color[25];
    int storage;
};

int main() {

    struct Console ps4;
    strcpy(ps4.name, "PlayStation 4 Slim");
    strcpy(ps4.color, "black");
    ps4.storage = 1000;

    struct Console xbox;
    strcpy(xbox.name, "Xbox One S");
    strcpy(xbox.color, "white");
    xbox.storage = 500;

    printf("%s", ps4.color);
    printf("\n");
    printf("%s", xbox.name);
    
    return 0; 
}