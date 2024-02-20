//
// Created by user on 2/20/2024.
//
#
#include "../Headers/functions.h"
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
