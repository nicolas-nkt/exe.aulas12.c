#include <stdio.h>
#include <math.h>
#define TAMANHO 4

int main () {

    float X[4];
    float Y[4];
    
    printf("====== Digite as cordenadas do quadrado asseguir =====\n");

    for( int i = 0; i <4; i++) {
        printf(" Digite as coordenada (x):\n");
        scanf("%d", &X);
    }

    printf("\nAgora digite as coordenadas de (Y)\n");

      for( int i = 0; i <4; i++) {
        printf(" Digite as coordenada (y):\n");
        scanf("%d", &Y);
    }

    printf("----- Resultado -----");

        if ((X[0] == X[1] && X[2] == X[3] && X[0] != X[2]) &&
            (Y[0] == Y[2] && Y[1] == Y[3] && Y[0] != Y[1]) &&
            ((X[2] - X[0]) == (Y[1] - Y[0]))) {

            printf("Essas coordenadas formam um quardrado!");

         } else {

             printf("Essas coordenadas formam um losango!");

             }

    return 0;
}
