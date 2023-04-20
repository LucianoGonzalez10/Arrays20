#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargarArreglo (int arreglo[], int dimension);
Pila apilarArreglo (int arreglo [], int dimension, Pila ejercicio4);
int main()
{

    int i =0, dimension=0, dado = 0;
    Pila ejercicio4;
    inicpila(&ejercicio4);
    printf("Ingrese la cantidad de elementos a cargar \n");
    scanf("%d", &dimension);
    int arreglo[dimension];
    i=cargarArreglo(arreglo, dimension);
    printf("%i \n", i);
        for(int r=0; r<dimension; r++){
        printf("-%i- \n", arreglo[r]);
    }
    int suma = sumaArreglo(arreglo, dimension);
    printf("%i", suma);
    ejercicio4 = apilarArreglo(arreglo, dimension, ejercicio4);
    mostrar(&ejercicio4);


    printf("Que elemento desea buscar en el arreglo? \n");
    scanf("%d", &dado);

    int confirm = buscarDado(arreglo, dimension, dado);
    if(confirm == 1){
        printf("El elemento se encuentra. \n");
    }
    else{
        printf("El elemento no se encuentra");
    }
    return 0;
}

int cargarArreglo (int arreglo[], int dimension)
{
    int i = 0;
    while(dimension>i)
    {
        printf("Ingresa el valor a cargar");
        scanf("%i", &arreglo[i]);
        i++;
    }
    return i;
}

int sumaArreglo (int arreglo[], int dimension)
{
     int suma = 0, r;
     for(r=0; r<dimension; r++)
    {
        suma = suma + arreglo[r];
    }
    return suma;
}
Pila apilarArreglo (int arreglo [], int dimension, Pila ejercicio4){
    inicpila(&ejercicio4);
    int j;
    for(j=0; j<dimension; j++){
        apilar(&ejercicio4, arreglo[j]);
    }
    return ejercicio4;
}

int buscarDado (int arreglo[], int dimension, int dado){
    int i;
    for(i=0; i<dimension; i++){
       if(arreglo[i] == dado){
        return 1;
       }
    }
    return 0;
}
