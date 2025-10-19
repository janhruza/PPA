/*
* Priklad 05: BMI - https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/priklady/Prikazy/05-BMI
* Autor reseni: Jan Hruza
*/

#include <stdio.h>

/// <summary>
/// Spocita hodnotu BMI na zaklade vysky (height) a vahy (weight). Predpokladame vysku v intervalu od 100 do 210.
/// </summary>
/// <param name="height">Vyska</param>
/// <param name="weight">Vaha</param>
/// <returns>Hodnotu BMI pro zadane parametry.</returns>
double Bmi(int height,
           int weight)
{
    // BMI = weight / ([height] * [height])
    // kde: weight: kg; height: cm

    double mHeight = (double)height / 100;  // nutno prevest na double
    return weight / (mHeight * mHeight);
}

/// <summary>
/// Hlavni program.
/// </summary>
int main(void)
{
    // deklarace promennych
    int height, weight;
    double bmi;

    // nacteni vstupu
    printf("Zadej vysku (cm): ");
    scanf_s("%d", &height);

    printf("Zadej vahu (kg): ");
    scanf_s("%d", &weight);

    // provedeni vypoctu
    bmi = Bmi(height, weight);

    // vypis vysledku
    printf("Vysledne BMI: %lf\n", bmi);
    return 0;
}