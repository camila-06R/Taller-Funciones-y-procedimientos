/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int raiz_cubica(int num) {
    int ra = 1;
    while (ra * ra * ra <= num) {
        ra++;
    }
    return ra - 1;
}

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("La raiz cubica de %d es %d\n", num, raiz_cubica(num));
    return 0;
}