#include <stdio.h>

int main(){
    int rango; //ingresa un numero para poder iniciar
    printf("Ingresa un número: ");
    scanf("%d",&rango);

    // codigo de pares saliendo de uno en uno hasta el rango 
    printf("Números pares del 0 al %d (",rango);
    for(int i = 2; i <= rango; i =  i + 2){
        printf("%d, ",i);
    }
    printf(")");

    // codigo de impares de uno en uno hasta el rango dado
    printf("\nNúmeros impares del 0 al %d (",rango);
    for(int i = 1; i <= rango; i =  i + 2){
        printf("%d, ",i);
    }
    printf(")\n");
}