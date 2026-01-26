#include <stdio.h>

float numero;

int main()
{
    printf("Escriba un número para verificar si es válido: \n");

    // Para verificar que sea un numero y recibimos el valor del scanf
    if (scanf("%f", &numero) == 1)
    {
        printf("Es número\n");
        // Para verificar que si es entero o flotante
        if (numero == (int)numero)
        {
            printf("Es un entero");
        }
        else
        {
            printf("Es un flotante");
        }
        // Para saber si es positivo o negativo
        if (numero > 0)
        {
            printf("Es positivo\n");
        }
        else if (numero < 0)
        {
            printf("Es negativo\n");
        }
        // Para verificar si es 0
        if (numero == 0)
        {
            printf("Su numero es 0\n");
        }
        // Para saber si está entre 0 y 100
        if (numero >= 0 && numero <= 100)
        {
            printf("Está entre 0 y 100\n");
        }
        else
        {
            printf("Fuera de rango entre 0 y 100\n");
        }
    }
    else
    {
        printf("No es un número\n");
    }
    return 0;
}