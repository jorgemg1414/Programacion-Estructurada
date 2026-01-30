#include <stdio.h>

int main () {
    float calificacion1, calificacion2, calificacion3, suma, final;
    printf("Ingrese la calificacion de la materia 1\n");
    scanf("%f", &calificacion1);
    printf("Ingrese la calificacion de la materia 2\n");
    scanf("%f", &calificacion2);
    printf("Ingrese la calificacion de la materia 3\n");
    scanf("%f", &calificacion3);
    suma = (calificacion1 + calificacion2 + calificacion3);
    final = suma / 3;
    printf("Su calificación final entre las tres materias es: %f\n", final);
    return 0;
}