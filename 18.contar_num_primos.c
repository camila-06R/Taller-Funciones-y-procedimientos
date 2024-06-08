/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int es_primo(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}


void contar_primos(int n, int *contador) {
    for (int i = 2; i <= n; i++) {
        if (es_primo(i)) (*contador)++; 
    }
}

int main() {
    int n, contador = 0;
    
    printf("Ingrese un número: ");
    scanf("%d", &n);
    
    contar_primos(n, &contador);
    
    printf("Hay %d números primos hasta %d\n", contador, n);
    return 0;