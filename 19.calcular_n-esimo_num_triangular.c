/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int calcular_numero_triangular(int n) {
    return n * (n + 1) / 2;
}

void imprimir_numero_triangular(int n, int triangular) {
    printf("El %d-ésimo número triangular es %d\n", n, triangular);
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int resultado = calcular_numero_triangular(n);
    imprimir_numero_triangular(n, resultado);
    return 0;
}