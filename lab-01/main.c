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
        case 4: {
            int n, x;
            scanf("%d %d", &n, &x);
            printf("hatvany: %d\n", power(n, x));
            break;
        }
        case 5: {
            int a, b;
            scanf("%d %d", &a, &b);
            printf("lnko: %d\n", lnko(a, b));
            break;
        }
        case 6: {
            int a, b;
            scanf("%d %d", &a, &b);
            printf("lkkt: %d\n", lkkt(a, b));
            break;
        }
        default:
            printf("error\n");

    }
    return 0;
}
