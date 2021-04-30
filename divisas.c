#include <stdio.h>
#include <stdlib.h>
/*
Autor: Cecilia L.
Description: covertidor de pesos a (Libras, Dolares Americanos, Euros)
*/
int main(){
//Declarar e inicializar 2 variables o mas (l, d, e)
int dolar = 20, euro = 24, libra = 28, p = 1, opcion, pesos;
printf("-----------------------------");
printf("que quieres hacer?");
printf("1. Realizar operaciones \n 2. Salir ");
scanf("%d", &opcion);
if (opcion != 1)
{
    printf("salio del programa \n");
    exit (0);
}
else{
printf("A que moneda quieres cambiar los pesos?: ");
//elegir el tipo de moneda (l, d ,e)
printf("1.Dolares \n 2.Euros \n 3.Libras \n 4.Salir \n ");
scanf("%d", &opcion);
printf("ingresa el monto:");
scanf("%d", &pesos);
//imprimir el resultado
    switch ( pesos ){
        //declarations
        // . . . 
    case 1:
    printf( "nada" pesos, (pesos / dolar))
    break;

    case 2:
        printf("\n", pesos, (pesos / euro));
        break;

    case 3:
        printf("\n", pesos, (pesos / libra));
        break;
    
    default:
        printf("salir \n");
        break;
    }
    return (0);
}
}
