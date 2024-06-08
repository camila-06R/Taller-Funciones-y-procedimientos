/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (es_primo(num)) {
        printf("%d es primo\n", num);
    } else {
        printf("%d no es primo\n", num);
    }
    return 0;
}