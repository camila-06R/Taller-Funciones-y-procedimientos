/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int contar_digitos(int num) {
    int contador = 0;
    do {
        contador++;
        num /= 10;
    } while (num > 0);
    return contador;
}

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("%d tiene %d dígitos\n", num, contar_digitos(num));
   return 0;
}