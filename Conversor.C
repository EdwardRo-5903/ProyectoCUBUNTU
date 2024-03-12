#include <stdio.h>

float convertirMoneda(float cantidad, float tasa) {
    return cantidad * tasa;
}

int main() {
    // Tasas de cambio actuales (puedes actualizarlas según el valor actual)
    float tasaUSDtoGTQ = 7.75;
    float tasaEURtoGTQ = 9.20;

    int opcion;
    float cantidad, resultado;

    printf("Bienvenido al conversor de monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Quetzales a Euros\n");
    printf("4. Euros a Quetzales\n");
    printf("Ingrese el número de la opción deseada: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            resultado = convertirMoneda(cantidad, 1 / tasaUSDtoGTQ);
            printf("%.2f GTQ equivalen a %.2f USD\n", cantidad, resultado);
            break;
        case 2:
            printf("Ingrese la cantidad en Dólares: ");
            scanf("%f", &cantidad);
            resultado = convertirMoneda(cantidad, tasaUSDtoGTQ);
            printf("%.2f USD equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 3:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            resultado = convertirMoneda(cantidad, 1 / tasaEURtoGTQ);
            printf("%.2f GTQ equivalen a %.2f EUR\n", cantidad, resultado);
            break;
        case 4:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            resultado = convertirMoneda(cantidad, tasaEURtoGTQ);
            printf("%.2f EUR equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}
