/*
* Priklad 09: Uhel Alfa - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/09-Uhel
* Autor reseni: Jan Hruza
*/

//  Zadani
//  Napiste podprogram alphaAngle(Integer a, Integer b, Integer c) => Integer , ktery pro trojuhelnik
//  zadany stranami a, b, a c vypocita uhel alfa (uhel, ktery svira strana b a c).
//  Vysledek zaokrouhlete na cele stupne.

//  Vstupy
//  a,b,c - strany trojuhelnika; cele kladne cislo, zadane strany jsou zvoleny tak, aby sel trojuhelnik sestrojit

//  Vystup
//  uhel alfa protilehly strane a, zaokrouhleny na cele stupne

#include <stdio.h>
#include <math.h>

/// <summary>
/// Konstanta PI.
/// </summary>
const double PI = 3.14159265358979323846;

/// <summary>
/// Vypocita uhel alfa svirany stranamy B a C.
/// </summary>
/// <param name="a">Delka strany A.</param>
/// <param name="b">Delka strany B.</param>
/// <param name="c">Delka strany C.</param>
/// <returns></returns>
int alphaAngle(int a,
               int b,
               int c)
{
    double a_d = (double)a;
    double b_d = (double)b;
    double c_d = (double)c;

    double numerator = pow(b_d, 2) + pow(c_d, 2) - pow(a_d, 2);
    double denominator = 2.0 * b_d * c_d;

    // Hodnota cos(alfa)
    double cos_alpha = numerator / denominator;
    double alpha_rad = acos(cos_alpha);

    // Prevod na stupne
    double alpha_deg = alpha_rad * (180.0 / PI);
    return (int)round(alpha_deg);
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    // deklarace promennych
    int a, b, c, uhel;

    // ziskani vstupu
    printf("Zadej delku strany A: ");
    scanf_s("%d", &a);

    printf("Zadej delku strany B: ");
    scanf_s("%d", &b);

    printf("Zadej delku strany C: ");
    scanf_s("%d", &c);

    // provedeni vypoctu
    uhel = alphaAngle(a, b, c);

    // vypis vysledku
    printf("Pro strany a = %d, b = %d a c = %d je uhel alfa %d.\n", a, b, c, uhel);
    return 0;
}