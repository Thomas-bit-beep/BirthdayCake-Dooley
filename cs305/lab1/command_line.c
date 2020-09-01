/* Tyson Dooley */
#include <stdio.h>

/* main program prints Hello, world! */
int main(int argc, char* argv[]){
    printf("Hello, world!\n");
    if (argc != 2) {
        printf("I love C!\n");
    }
    else {
        printf("%s\n", argv[1]);
    }
    return 0;
}