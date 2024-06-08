/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int suma_impares(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("La suma de los números impares hasta %d es %d\n", n, suma_impares(n));
    return 0;
}