/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int inverso(int num) {
    int inverso = 0;
    while (num > 0) {
        inverso = inverso * 10 + num % 10;
        num /= 10;
    }
    return inverso;
}

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("El inverso de %d es %d\n", num, inverso(num));
    return 0;
}
