//
// Created by user on 3/13/2024.
//

#ifndef LAB_04_INTARRAY_H
#define LAB_04_INTARRAY_H

typedef struct IntArray IntArray;

IntArray * createIntArray(int capacity);
void printArray(IntArray* array);
bool isFull(IntArray array);
bool isEmpty(IntArray array);
int getItemAt(IntArray array, int position);
void insertFirst(IntArray* pArray, int item);
void insertLast(IntArray* pArray, int item);
void insertAt(IntArray* pArray, int position, int item);
void deleteItemAt(IntArray* pArray, int position);
int search(IntArray pArray, int item);
bool update(IntArray *pArray, int position, int newItem);
void deallocateIntArray(IntArray *pArray);
#endif //LAB_04_INTARRAY_H
