#include <stdio.h>
#include "Headers/functions.h"

int main() {
    printf("feladat szama\n");
    int feladat;
    scanf("%i",&feladat);
    switch (feladat) {
        case 1:{
            int n,m;
            scanf("%i%i",&n,&m);
            int **matrix;
            readMatrix(&n,&m,&matrix,"CON");
            reverseMatrix(&n,&m,&matrix,"CON");
        }
    }
    return 0;
}
