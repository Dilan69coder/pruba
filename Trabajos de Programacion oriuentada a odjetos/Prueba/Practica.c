//Programa para saber la etapa de la vida en la que estas 
#include <stdio.h>
int main() {
    char nombre[50];
    int edad;
    printf("Ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin); 

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("\nHola %s", nombre);

    if (edad < 18) {
        printf("Eres un niño/a (menor de 18 años).\n");
    } else if (edad >= 18 && edad <= 28) {
        printf("Eres un joven (18 a 28 años).\n");
    } else if (edad >= 29 && edad <= 60) {
        printf("Eres un adulto (29 a 60 años).\n");
    } else {
        printf("Eres un adulto mayor (más de 60 años).\n");
    }

    return 0;
}
