#include <stdio.h>

int mystery(int a, int b){
    int retValue = 0;
    if(a > b){
        int diff = a - b;
        int i;
        for(i = 0; i < diff; i++){
            retValue += i;
        }
    }
    else {
        retValue = (43/10) + 2;
    }
    return retValue;
}

int main(int argc, char* argv[]){
    int trial1 = mystery(4, 7);
    int trial2 = mystery(6, 1);
    int trial3 = mystery(5, -1);
    int trial4 = mystery(5, 5);
    printf("Trial 1: %d\n", trial1);
    printf("Trial 2: %d\n", trial2);
    printf("Trial 3: %d\n", trial3);
    printf("Trial 4: %d\n", trial4);
}