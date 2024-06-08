/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int suma_aritmetica(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("La suma de los primeros %d términos es %d\n", num, suma_aritmetica(num));
    return 0;
}