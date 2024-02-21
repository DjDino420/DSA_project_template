#include <stdio.h>
#include "basics.h"
int main() {
    int n;
    scanf("%i",&n);
    switch (n) {
        case 1:
        {
            int a,b;
            scanf("%i%i",&a,&b);
            printf("%i", sum(a,b));
        }
        case 2:{
            int a,b,c;
            scanf("%i%i%i",&a,&b,&c);
            printf("%i", mini(a,b,c));
        }
        case 3:{
            int n=5,*pArray = NULL;
            readArray(&n,&pArray,"../be.txt");
        }

    }
    return 0;
}
