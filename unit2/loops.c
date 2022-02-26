#include <stdio.h>
#include "../libraries/utils.h"


int main(int argc, char** argv){

    for ( int iterator = 0 ; iterator <=10 ; iterator = iterator + 1) {
        //code;
        printf("ITERATOR: %d\n", iterator);
        sleep(1000);
    }
    return 0;
}