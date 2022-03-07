#include <stdio.h>

int main(){
    int rango; //Definimos la variable del rango hasta donde vamos a dividir los pares e impares
    printf("Ingresa un número: ");
    scanf("%d",&rango);

    // Escribe los números pares desde el 0 hasta el rango
    printf("Números pares del 0 al %d (",rango);
    for(int i = 2; i <= rango; i =  i + 2){
        printf("%d, ",i);
    }
    printf(")");

    // Escribe los números impares desde el 0 hasta el rango
    printf("\nNúmeros impares del 0 al %d (",rango);
    for(int i = 1; i <= rango; i =  i + 2){
        printf("%d, ",i);
    }
    printf(")\n");
}