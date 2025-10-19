/*
* Priklad 01: Ctverec
* Autor reseni: Jan Hruza, DiS.
*/

#include <stdio.h>

/// <summary>
/// Vypocte obsah ctverce na zaklade delky jedne strany.
/// </summary>
/// <param name="a">Delka strany ctverce.</param>
/// <returns>Obsah ctverce.</returns>
int Area(int a)
{
    return a * a;
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    // deklarace promennych
    int edge, area;

    // ziskani uzivatelskeho vstupu
    printf("Zadej delku strany: ");
    scanf_s("%d", &edge);

    // provedeni vypoctu
    area = Area(edge);

    // vypsani vysledku
    printf("Obsah ctverce o strane %d je %d.\n", edge, area);
    return 0;
}