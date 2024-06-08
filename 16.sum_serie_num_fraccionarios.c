/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

double suma_fracciones(int n) {
    double suma = 0.0;
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("La suma de la serie de fracciones hasta 1/%d es %.6lf\n", n, suma_fracciones(n));
    return 0;
}