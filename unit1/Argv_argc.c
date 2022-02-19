#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    if (argc <=1) 
    printf("U need to enter arguments e.g. %s argv1, argv2 ... .\n", argv[0]);
    return 0;

    printf("U need to enter 4 elements when you run the code.\n");
    return 0;

    printf("Program executed: %s, number of inputs elements: %d\n", argv[0], argc);
    printf("Hola %s %s %s, bienvenido!\n", argv[1], argv[2], argv[3]);
    return 0;
}