#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>

using namespace std;

//variant 4

int main()
{
    double x, y;
    printf("Enter x, y: ");
    scanf_s("%lf %lf", &x, &y);

    if (x > 0 && y > 0 && x < 1.5 && y < 1.5 && y <= x && (pow(x, 2) + pow(y, 2)) <= 1) {  // I четверть 
        printf("Tochka popadaet v oblast\n");
    }
    else if (x < 0 && y > 0 && y <= 1.5 && x >= -1.5 && (pow(x, 2) + pow(y, 2)) >= 1) {  // II четверть
        printf("Tochka popadaet v oblast\n");
    }
    else if (x < 0 && y < 0 && y >= x && (pow(x, 2) + pow(y, 2)) <= 1) {  // III четверть
        printf("Tochka popadaet v oblast\n");
    }
    else if (x > 0 && y < 0 && x <= 1.5 && y >= -1.5 && (pow(x, 2) + pow(y, 2)) >= 1) {  // IV четверть 
        printf("Tochka popadaet v oblast\n");
    }
    else {
        printf("Tochka NE popadaet v oblast\n");
    }


    return 0;
}