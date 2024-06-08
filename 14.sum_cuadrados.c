/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int suma_cuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma_cuadrados(n));
    return 0;
}