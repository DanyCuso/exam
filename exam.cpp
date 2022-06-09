/*******************************************************
 *              Daniel Valdes Artiles                  *
 *                  Mariano Miranda                    *
 *                   EXAM.cpp code                     *
 *******************************************************/

#include <stdio.h>

float factorial(int);

int main (){

    int n;

    printf("\ningrese el tamaño de la piramide:\t");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++){

        for (int j = 0; j <= (n-i-2); j++){
            printf(" ");
        }

        for (int j = 0; j <= i; j++){
            printf("%.f ", factorial(i)/(factorial(j)*(factorial(i-j))));
        }
    printf("\n");
    }
}

float factorial (int n){

    int j;
    float result = 1;

    for (j = 1; j <= n; j++){
        result = result*j;
    }

    return result;
}

/********************************************************************************************
El codifgo anterior realiza una piramide de pascal utilzando la formula de factioriales     *
dicha formula se representa como:                                                           *
                                    n!                                                      *
                                __________                                                  *
                                  k!(n-k)!                                                  *
                                                                                            *
implementamos esta formula con 3 loops for pidiendo primero una entrada al ususario que     *
determina el numero de filas, seguido de un loop for general que las genera, y dos          *
loops for anidados uno que pone los espacios necesarios para que el resultao se vea         *
ordenado y uno que genera el numero de objetos por fila y el contenido de cada uno          *
                                                                                            *
aparte de la funcion main, esta la funcion factorial, que aplica la formula antes           *
mensionada y regresa el resultado de la divison de factoriales.                             *
*********************************************************************************************/