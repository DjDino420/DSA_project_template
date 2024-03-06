#include <stdio.h>
#include "Headers\functions.h"
int main() {
    printf("feladat szama: \n");
    int feladat;
    scanf("%i",&feladat);
    switch (feladat) {
        case 1:{
            int n, *pArray = NULL;
            readArray(&n, &pArray, "CON");

            for (int i = 0; i < n; ++i) {
                printf("%i ", pArray[i]);
            }
            printf("\n%i",numberOfEvenNumbers(n,pArray));
            deallocateMemoryForArray(&pArray);
        }
        case 2:{
            int n, *pArray = NULL;
            readArray(&n, &pArray, "CON");

            for (int i = 0; i < n; ++i) {
                printf("%i ", pArray[i]);
            }
            printf("\n%i",sumOfPositiveNumbers(n,pArray));
            deallocateMemoryForArray(&pArray);
        }
        case 3:{
            int rows,cols;
            int **matrix;
            readMatrix(&rows,&cols,&matrix,"CON");

        }
        case 4:{
            int n;
            scanf("%i",&n);
            digitNumbers(n);
        }
    }
    return 0;
}
