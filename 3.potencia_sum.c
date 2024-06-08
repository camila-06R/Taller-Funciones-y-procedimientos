/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        int temp = 0;
        for (int j = 0; j < base; j++) {
            temp += resultado;
        }
        resultado = temp;
    }
    return resultado;
}

int main() {
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    printf("%d^%d = %d\n", base, exponente, potencia(base, exponente));
    return 0;
}