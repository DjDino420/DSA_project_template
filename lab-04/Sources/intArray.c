//
// Created by user on 3/13/2024.
//
#include <stdlib.h>
#include <stdio.h>
#include "../Headers/intArray.h"

struct IntArray{
    int cap;
    int size;
    int *elements;
};

IntArray * createIntArray(int capacity){
    IntArray *pArray=malloc(sizeof (IntArray));
    pArray->elements = malloc(capacity * sizeof(int));
    if (pArray->elements == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    pArray->cap = capacity;
    pArray->size = 0;
    return pArray;
}


void printArray(IntArray* array) {
    if(array->size!=0){
        for (int i = 0; i < array->cap; ++i) {
            printf("%i ",array->elements[i]);
        }
    }
    else
        printf("array is empty");
}

bool isFull(IntArray array) {
    if(array.size>=array.cap)
        return true;
    else
        return false;
}

bool isEmpty(IntArray array) {
    if(array.size==0)
        return true;
    else
        return false;
}

int getItemAt(IntArray array, int position) {
    return array.elements[position];
}

void insertAt(IntArray *pArray, int position, int item) {
    if(isFull(*pArray))
        printf("capacity overflow\n");
    else{
        for (int i = pArray->size; i > position ; --i) {
            pArray->elements[i]=pArray->elements[i-1];
        }
        pArray->elements[position]=item;
        pArray->size++;
    }
}

void insertFirst(IntArray *pArray, int item) {
    for (int i = pArray->size; i > 0 ; --i) {
        pArray->elements[i]=pArray->elements[i-1];
    }
    pArray->elements[0]=item;
    pArray->size++;
}

void insertLast(IntArray *pArray, int item) {
    for (int i = pArray->size; i > 0 ; --i) {
        pArray->elements[i]=pArray->elements[i-1];
    }
    pArray->elements[pArray->size]=item;
    pArray->size++;
}

void deleteItemAt(IntArray *pArray, int position) {
    if (position < 0 || position >= pArray->size) {
        printf("invalid position\n");
        return;
    }

    for (int i = position; i < pArray->size - 1; ++i) {
        pArray->elements[i] = pArray->elements[i + 1];
    }

    pArray->size--;
}

int search(IntArray pArray, int item) {
    for (int i = 0; i < pArray.size; ++i) {
        if (pArray.elements[i] == item) {
            return i;
        }
    }
    return -1;
}

bool update(IntArray *pArray, int position, int newItem) {
    if (position < 0 || position >= pArray->size) {
        printf("Invalid position. Cannot update item.\n");
        return false;
    }

    pArray->elements[position] = newItem;
    return true;
}

void deallocateIntArray(IntArray *pArray) {
    free(pArray->elements);
    pArray->size = 0;
    pArray->cap = 0;
}


