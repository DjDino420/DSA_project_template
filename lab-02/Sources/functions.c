//
// Created by user on 2/28/2024.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int sum(int a, int b){
    return a+b;
}

float mini(float a, float b, float c) {
    float x = a;
    if (a>b)
        x=b;
    if (x>c)
        return c;
    else
        return x;
}
void allocateMemoryForArray(int n, int **dpArray) {
    *dpArray = (int *)malloc(n * sizeof(int));
    if (*dpArray == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
}

void readArray(int *pointerN, int **dpArray, const char *input) {
    printf("%s\n", input);
    if (strcmp(input, "CON") == 0) {
        scanf("%i", pointerN);
        allocateMemoryForArray(*pointerN, dpArray);
        for (int i = 0; i < *pointerN; ++i) {
            scanf("%i", &(*dpArray)[i]);  // Use (*dpArray)[i] instead of (dpArray)[i]
        }
    } else {
        FILE *in = fopen(input, "r");
        if (!in) exit(EXIT_FAILURE);

        fscanf(in, "%i", pointerN);
        allocateMemoryForArray(*pointerN, dpArray);
        for (int i = 0; i < *pointerN; ++i) {
            fscanf(in, "%i", &(*dpArray)[i]);  // Use (*dpArray)[i] instead of (dpArray)[i]
        }

        fclose(in);
    }
}

void deallocateMemoryForArray(int **dpArray) {
    free(*dpArray);
    *dpArray = NULL;
}

int power(int n, int x) {
    int result = 1;

    for (int i = 0; i < x; ++i) {
        result *= n;
    }

    return result;
}

int numberOfEvenNumbers(int n, int *pArray) {
    int aux=0;
    for (int i = 0; i < n; ++i) {

        if(pArray[i]%2==0)
            aux++;
    }
    return aux;
}
int sumOfPositiveNumbers(int n, int *pArray) {
    int aux=0;
    for (int i = 0; i < n; ++i) {

        if(pArray[i]>0)
            aux++;
    }
    return aux;
}

void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix) {
    **dpMatrix=(int **) malloc(rows*sizeof (int *));
    for (int i = 0; i < rows; i++) {
        *dpMatrix[i] = (int *)malloc(cols * sizeof(int));
    }
}

void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input) {
    printf("%s\n", input);
    if (strcmp(input, "CON") == 0) {
        scanf("%i %i", pRows, pCols);
        allocateMemoryForMatrix2(*pRows, *pCols, dpArray);

        for (int i = 0; i < *pRows; ++i) {
            for (int j = 0; j < *pCols; ++j) {
                scanf("%i", &(*dpArray)[i][j]);
            }
        }
    } else {
        FILE *in = fopen(input, "r");
        if (!in)
            exit(EXIT_FAILURE);

        fscanf(in, "%i %i", pRows, pCols);
        allocateMemoryForMatrix2(*pRows, *pCols, dpArray);

        for (int i = 0; i < *pRows; ++i) {
            for (int j = 0; j < *pCols; ++j) {
                fscanf(in, "%i", &(*dpArray)[i][j]);
            }
        }
        fclose(in);
    }
}

#include "../Headers/functions.h"
