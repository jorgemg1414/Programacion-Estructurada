#include <stdio.h>

float num1, num2, num3;

int main()
{
    // Pedimos datos
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%f", &num3);

    // Para comparar el numero 1 con el numero 2
    if (num1 > num2)
        printf("%.2f es mayor que %.2f\n", num1, num2);
    else if (num1 < num2)
        printf("%.2f es menor que %.2f\n", num1, num2);
    else
        printf("%.2f es igual a %.2f\n", num1, num2);

    // Para comparar el numero 1 con el 3
    if (num1 > num3)
        printf("%.2f es mayor que %.2f\n", num1, num3);
    else if (num1 < num3)
        printf("%.2f es menor que %.2f\n", num1, num3);
    else
        printf("%.2f es igual a %.2f\n", num1, num3);

    // Para comparar el numero 2 con el 3
    if (num2 > num3)
        printf("%.2f es mayor que %.2f\n", num2, num3);
    else if (num2 < num3)
        printf("%.2f es menor que %.2f\n", num2, num3);
    else
        printf("%.2f es igual a %.2f\n", num2, num3);

    return 0;
}
