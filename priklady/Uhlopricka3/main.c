/*
* Priklad 02: Uhlopricka na treti - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/02-Uhlopricka
* Autor reseni: Jan Hruza
*/

#include <stdio.h>
#include <math.h>

/// <summary>
/// Spocte uhlopricku kvadru ze zadanych delek stran.
/// </summary>
/// <param name="a">Delka strany A.</param>
/// <param name="b">Delka strany B.</param>
/// <param name="c">Delka strany C.</param>
/// <returns>Vysledna uhlopricka.</returns>
double Uhlopricka(double a,
                  double b,
                  double c)
{
    double u2 = pow(a, 2) + pow(b, 2) + pow(c, 2);
    double u = sqrt(u2);
    return u;
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    // deklarace promennych
    double a, b, c, u;

    // nacteni uzivatelskych vstupu
    printf("Delka strany A: ");
    scanf_s("%lf", &a);

    printf("Delka strany B: ");
    scanf_s("%lf", &b);

    printf("Delka strany C: ");
    scanf_s("%lf", &c);

    // provede vypocet
    u = Uhlopricka(a, b, c);

    // vypis vysledku
    printf("Delka uhlopricky je: %lf\n", u);

    return 0;
}