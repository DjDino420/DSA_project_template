#include <stdio.h>
#include <stdlib.h>
#include "Headers/intArray.h"

int main() {
    IntArray* array = createIntArray(11);
    for (int i = 0; i < 10; ++i) {
        insertAt(array,i,i);
    }
    insertLast(array,123);
    insertLast(array,123);
    insertLast(array,123);
    insertLast(array,123);

    //deleteItemAt(array,5);
    printArray(array);
    return 0;
}
