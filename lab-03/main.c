#include <stdio.h>
#include <stdlib.h>
#include "Headers/functions.h"
#include "Headers/student.h"

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
        case 2:{
            int numberOfStudents;
            scanf("%i",&numberOfStudents);

        }
    }
    return 0;
}
