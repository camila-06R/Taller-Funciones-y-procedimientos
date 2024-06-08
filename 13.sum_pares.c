/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int suma_pares(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("La suma de los números pares hasta %d es %d\n", n, suma_pares(n));
    return 0;
}