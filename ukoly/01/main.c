// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * Ukol 1: Obdelnik
 */

#include <stdio.h>
#include <math.h>
#include "vect.h"

int main()
{
    // deklarace promennych
    vect A;
    vect B;
    vect C = { .x = 0, .y = 0 };
    vect D = { .x = 0, .y = 0 };
    float diag;
    
    // datove vstupy
	printf("Zadej souradnice bodu A (x y): ");
	scanf_s("%f %f", &A.x, &A.y);

	printf("Zadej souradnice bodu B (x y): ");
	scanf_s("%f %f", &B.x, &B.y);

    printf("Zadej delku uhlopricky: ");
    scanf_s("%f", &diag);

    // Vstup: A(xA,yA), B(xB,yB), diag (u)
    // Vystup: C, D (druha orientace je s minusem vektoru v)

    float ax = A.x, ay = A.y;
    float bx = B.x, by = B.y;

    // 1) delka AB
    float a = sqrtf((bx - ax) * (bx - ax) + (by - ay) * (by - ay));

    // 2) druha strana b z Pythagorovy vety
    float u = diag;
    float b = sqrtf(u * u - a * a);  // musi platit u >= a

    // 3) kolmy vektor k AB, normalizace a skalovani na delku b
    float vx = -(by - ay);
    float vy = (bx - ax);
    float vlen = sqrtf(vx * vx + vy * vy);
    vx = vx / vlen * b;
    vy = vy / vlen * b;

    // 4) zbyvajici vrcholy
    C.x = bx + vx; C.y = by + vy;
    D.x = ax + vx; D.y = ay + vy;

    // vystup
    printf("\nVysledky\n");
    printf("Cx = %.2f\n", C.x);
    printf("Cy = %.2f\n", C.y);
    printf("Dx = %.2f\n", D.x);
    printf("Dy = %.2f\n", D.y);

    return 0;
}
