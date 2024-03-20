//
// Created by user on 2/28/2024.
//

#ifndef LAB_04_FUNCTIONS_H
#define LAB_04_FUNCTIONS_H
int sum(int a, int b);
float mini(float a,float b, float c);
void allocateMemoryForArray(int n, int **dpArray);
void readArray(int *n, int **dpArray, const char *input);
void deallocateMemoryForArray(int **dpArray);
int power(int n,int x);
int numberOfEvenNumbers(int n, int *pArray);
int sumOfPositiveNumbers(int n, int *pArray);
void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix);
void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);
void reverseMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);

float average(int n, int *pArray);

int numberOfOddNumbers(int n, int *pArray);
int productOfNegativeNumbers(int n, int *pArray);
void digitNumbers(int n);
int sumArray(int *a,int n);

#endif //LAB_04_FUNCTIONS_H
