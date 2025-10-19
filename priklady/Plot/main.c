/*
* Ukol 07: Plot - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/07-Plot
* Autor reseni: Jan Hruza
*/

//  Zadani
//  Napiste podprogram Gap (Integer length, Integer pickets, Integer picketWidth) => Integer , ktery na zaklade delky plotu,
//  poctu planek a sirky jedne planky (vse v mm) spocita, jak velke budou mezery mezi jednotlivymi plankami a plotovymi sloupky,
//  pokud maji byt vsechny mezery stejne velke.

//  Vstup
//  length - delka plotu v mm
//  pickets - pocet planek
//  picketWidth - sirka planky v mm

//  Vystup
//  Sirka jedne mezery zaokrouhlena na cele mm.

#include <stdio.h>

/// <summary>
/// Spocita velikost mezer mezi jednotlivymi plankami.
/// </summary>
/// <param name="length">Delka plotu v mm.</param>
/// <param name="pickets">Pocet planek.</param>
/// <param name="picketWidth">Sirka jedne planky v mm.</param>
/// <returns>Sirku mezer mezi plankami zaokrouhlenou na cele mm.</returns>
int Gap(int length,
        int pickets,
        int picketWidth)
{
    // celkova delka planek
    int pw = pickets * picketWidth;

    return (length - pw) / (pickets - 1); // pocet mezer je vzdy pocet planek - 1
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    // deklarace promennych
    int length, pickets, picketWidth, gap;

    // ziskani vstupu
    printf("Zadej sirku plotu (v mm): ");
    scanf_s("%d", &length);

    printf("Zadej pocet planek: ");
    scanf_s("%d", &pickets);

    printf("Zadej sirku planky (mm): ");
    scanf_s("%d", &picketWidth);

    // provedeni vypoctu
    gap = Gap(length, pickets, picketWidth);

    // vypsani vysledku
    printf("Sirka mezer mezi plankami je %d mm.\n", gap);
    return 0;
}