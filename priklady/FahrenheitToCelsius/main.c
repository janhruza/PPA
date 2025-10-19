/*
* Priklad 04: FahrenheitToCelsius - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/04-F2C
* Autor reseni: Jan Hruza
*/

#include <stdio.h>

/// <summary>
/// Prevede teplotu ve stupnich fahrenheita na stupne celsia. Oriznuto pouze na celou cast cisla.
/// </summary>
/// <param name="f">Stupne fahrenheita.</param>
/// <returns>Hodnotu c ve stupnich celsia.</returns>
int FahrenheitToCelsius(int f)
{
    // C = ((F - 32) * 5) / 9
    return ((f - 32) * 5) / 9;
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    // deklarace promennych
    int f, c;

    // nacteni vstupu
    printf("Zadej teplotu ve stupnich F: ");
    scanf_s("%d", &f);

    // provedeni vypoctu
    c = FahrenheitToCelsius(f);

    // vypis vysledku
    printf("%dF je %dC\n", f, c);
    return 0;
}