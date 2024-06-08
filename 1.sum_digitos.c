/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int suma_digitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10; 
        numero /= 10; 
    }
    return suma;
}
int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    int resultado = suma_digitos(numero);
    printf("La suma de los dígitos de %d es %d\n", numero, resultado);
    return 0;
}

