#include <stdio.h>
#include <string.h>

int main() { 
    //se declaran los diferentes tipos de variables 
    int edad;
    float promedio;
    char nombre[100];

    //Mensaje de bienvenida 
    printf("Bienvenido al programa de Roy@l\n");

    //se pide al usuario ingresar su nombre (variable cadena)
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre),stdin);//se lee y se almacena en cadena el nombre del usuario

    //se pide al usuario que ingrese sus edad (varaible entera)
    printf("Ingrese su edad: ");
    scanf("%d", &edad); //se lee y se almacena la edad ingresada

    //se pide al usuario que ingrese su promedio en la materia (variable flotante)
    printf("Ingrese su promedio en Programacion: ");
    scanf("%f", &promedio);//se lee y se almacena el promedio
    

    //se muestran todas las variables ingresadas por el usuario junto a un mensaje descriptivo
    printf("\nEstimado/a %sUsted tiene %d anios y cuenta con un promedio de %.2f en la materia de programacion.\n", nombre, edad, promedio);

    return 0;//para indicar que el programa se ejecuto con exito

}