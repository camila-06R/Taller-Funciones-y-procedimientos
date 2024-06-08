/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    printf("El MCD de %d y %d es %d\n", a, b, mcd(a, b));
    return 0;
}