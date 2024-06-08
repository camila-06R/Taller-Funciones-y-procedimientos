/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int producto_geometrico(int base, int n) {
    int producto = 1;
    for (int i = 0; i < n; i++) {
        producto *= base;
    }
    return producto;
}

int main() {
    int base, num;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el número de terminos: ");
    scanf("%d", &num);
    printf("El producto de los primeros %d terminos es %d\n", num, producto_geometrico(base, num));
    return 0;
}