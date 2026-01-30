#include <stdio.h>
#include <string.h>

char nombre[50];
int edad;
float peso, altura_cm, altura_m, imc;
char diagnostico[50];

int main() {
    printf("Ingrese su nombre: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = 0;
    printf("Ingrese su edad (1-120 años): ");
    scanf("%d", &edad);
    printf("Ingrese su peso en kg (20-300): ");
    scanf("%f", &peso);
    printf("Ingrese su altura en centímetros (50-250): ");
    scanf("%f", &altura_cm);
    
    if (edad < 1 || edad > 120) {
        printf("Advertencia: Edad fuera del rango recomendado (1-120).\n");
    }
    
    if (peso < 20 || peso > 300) {
        printf("Advertencia: Peso fuera del rango recomendado (20-300 kg).\n");
    }
    
    if (altura_cm < 50 || altura_cm > 250) {
        printf("Advertencia: Altura fuera del rango recomendado (50-250 cm).\n");
    }

    // Convertir altura a metros
    altura_m = altura_cm / 100.0;
    
    // Calcular IMC
    imc = peso / (altura_m * altura_m);
    
    // Determinar diagnóstico usando if-else if-else
    if (imc < 18.5) {
        strcpy(diagnostico, "Bajo de peso");
    } else if (imc >= 18.5 && imc < 24.9) {
        strcpy(diagnostico, "Peso normal");
    } else if (imc >= 25 && imc < 29.9) {
        strcpy(diagnostico, "Sobrepeso");
    } else if (imc >= 30 && imc < 34.9) {
        strcpy(diagnostico, "Obesidad tipo 1");
    } else if (imc >= 35 && imc < 39.9) {
        strcpy(diagnostico, "Obesidad tipo 2");
    } else {
        strcpy(diagnostico, "Obesidad tipo 3 (obesidad mórbida)");
    }
    
    // Resultado - Formato solicitado
    printf("\n\n");
    printf("========================================\n");
    printf("     INFORME DE DIAGNÓSTICO IMC\n");
    printf("========================================\n");
    printf("Paciente: %s\n", nombre);
    printf("Edad: %d años\n", edad);
    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m (convertido de %.1f cm)\n", altura_m, altura_cm);
    printf("\nRESULTADOS:\n");
    printf("IMC calculado: %.2f\n", imc);
    printf("Diagnóstico: %s\n", diagnostico);
    printf("========================================\n");
    
    return 0;
}