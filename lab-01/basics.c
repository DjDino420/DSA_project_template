//
// Created by user on 2/21/2024.
//

#include "basics.h"
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
        printf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
}

void readArray(int *pointerN, int **dpArray, const char *input) {
    printf("%s\n",input);
    if(strcmp(input,"CON")==0){
       // scanf()
    } else{

        FILE* in = fopen(input,"r");
        if(!in)exit(EXIT_FAILURE);
        printf("megy");
        fscanf(in,"%i",pointerN);
        allocateMemoryForArray(*pointerN,dpArray);
        for (int i = 0; i < *pointerN; ++i) {
            fscanf(in,"%i",&(dpArray)[i]);
        }
        fclose(in);
    }
}

void deallocateMemoryForArray(int **dpArray) {
    free(*dpArray);
    *dpArray=NULL;
}
