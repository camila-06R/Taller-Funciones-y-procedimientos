/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

double producto_fracciones(int n) {
    double producto = 1.0;
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    return producto;
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("El producto de la serie de fracciones hasta 1/%d es %.6lf\n", n, producto_fracciones(n));
    return 0;
}