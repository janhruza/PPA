/*
* Ukol 08: Sleva? - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/08-Sleva
* Autor reseni: Jan Hruza
*/

//  Zadani
//  Napiste podprogram PriceChange(Integer oldPrice, Integer newPrice) => Integer, ktery
//  po zadani stare a nove ceny vyrobku vrati, o kolik procent se stara cena zmenila.
//  Vratte cela procenta (bez zaokrouhleni).

//  Vstupy
//  oldPrice - stara cena; cele kladne cislo
//  newPrice - nova cena; cele kladne cislo

//  Vystup
//  zmena ceny v procentech - cele kladne cislo (pouze cela cast, ne zaokrouhleni)

#include <stdio.h>

/// <summary>
/// Zjisti zmenu ceny (v %).
/// </summary>
/// <param name="oldPrice">Puvodni cena.</param>
/// <param name="newPrice">Nova cena.</param>
/// <returns>Rozdil cen v procentech.</returns>
int PriceChange(int oldPrice,
                int newPrice)
{
    return 100 - ((double)newPrice / oldPrice * 100);
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    // deklarace promennych
    int oldPrice, newPrice, change;

    // ziskani vstupu
    printf("Zadej puvodni cenu: ");
    scanf_s("%d", &oldPrice);

    printf("Zadej novou cenu: ");
    scanf_s("%d", &newPrice);

    // provedeni vypoctu
    change = PriceChange(oldPrice, newPrice);

    // vypsani vysledku
    printf("Cena se zmenila o %d procent.\n", change);
    return 0;
}