//  Ukol 03 - Doruceni
//  Cele zadani ukolu: https://programovani.kiv.zcu.cz/?sekce=ppa-cvicebnice&uloha=ppa-cvicebnice/ulohy/domaci/03-Doruceni
// 
//  Napiste program, který zjisti, zda pri shazovani nouzovych zasob ze
//  zasobovaci lode dopadne zachranny balicek do blizkosti lunarniho modulu.
// 
//  Struktura programu
// 
//  1. Program se zepta na:
//      - Rychlost (velocity) - (m/s),
//      - Vysku nad povrchem (altitude) - (m),
//      - Aktualni vzdalenost modulu (targetDistance) - m
//      - Maximalni vzdalenost dopadu (targetRadius) - m
//   
//  2. Provedeni vypoctu
//      - Jak daleko od modulu zachranny balicek s nahradnimi klici dopadl
//      - Zda se jej povedlo dorucit:
//          Tj. balicek ma v okamziku vypusteni vodorovny smer a rychlost zasobovaci lode
// 
//  3. Vyhodnoceni vysledku
//
//  Rozdeleni programu na metody (podprogramy)
//      - InputReal
//      - ComputeImpactDistance
//      - IsDelivered
//      - OutputResult
//
//  Poznamka: Hlavni program pouze pospojuje jednotlive casti dohromady. V pripade potreby dodejte i dalsi podprogramy, ktere ale nebudou volany z hlavniho programu.

#include <stdio.h>
#include <math.h>

#pragma region Definice metod a jejich popis

/// <summary>
/// Podprogram vypise na obrazovku text promenne prompt a nacte od uzivatele realne cislo, ktere vrati.
/// Predpokladejte inteligentniho uzivatele, který zada pozadovane hodnoty.
/// </summary>
/// <returns>Realne cislo zadane uzivatelem.</returns>
static double InputReal(const char* prompt);

/// <summary>
/// Podprogram na zaklade rychlosti a vysky vypocita vzdalenost mista dopadu. Rychlost (velocity) je v m/s, vyska (altitude) v metrech a balicek je vypusten souradnicich [0; altitude].
/// Jako gravitacni zrychlení uvazujte konstantu 1, 62 m / s².Vzhledem k male vysce a vzdalenostem zasobovaci lode muzeme ignorovat zakriveni povrchu Mesice a povazovat jej za rovinu.
/// Predpokladejte, ze velocity i altitude bude kladne cislo.
/// </summary>
/// <returns>Vzdalenost mista dopadu.</returns>
static double ComputeImpactDistance(double velocity, double altitude);

/// <summary>
/// Podprogram otestuje, zda dosazena vzdalenost distance lezi v zadane zasobovaci oblasti o dane velikosti. targetDistance je stred cile, targetRadius je maximalni povolena vzdalenost od cile.
/// </summary>
/// <returns>V pripade, ze bylo dosazeno zasobovaci oblasti, vrati se hodnota 0, v opacnem pripade se vrati bud minimálni pocet metru, o ktery je nutne trefit dal (kladne cislo) nebo minimálni pocet metru, o ktery je nutne trefit bliz (zaporne cislo).</returns>
static double IsDelivered(double distance, double targetDistance, double targetRadius);

/// <summary>
/// Podprogram vypise vysledek strelby ve tvaru:
/// "balicek dorucen!",
/// "do cile ve vzdalenosti 50.0 m chybi 10.0 m" nebo
/// "cil ve vzdalenosti 50.0 m byl prestrelen o 10.0 m".
/// Povsimnete si, ze znamenko se ve vypisu neobjevuje. Vsechny hodnoty vypisujte s presnosti na 1 desetinne misto.
/// </summary>
static void OutputResult(double targetDistance, double miss);

/*
* Hlavni program musi volat definovane metody (podprogramy):
*   - InputReal
*   - ComputeImpactDistance
*   - IsDelivered
*   - OutputResult
* 
* Program nesmi volat jine pomocne metody,
* tyto metody ale musi byt volany pouze z uvedenych metod
*/

#pragma endregion

#pragma region Declarace metod

static double InputReal(const char* prompt)
{
    double value;
    printf("%s: ", prompt);
    scanf_s("%lf", &value);
    return value;
}

static double ComputeImpactDistance(double velocity,
                                    double altitude)
{
    double value = 0;
    return value;
}

static double IsDelivered(double distance,
                          double targetDistance,
                          double targetRadius)
{
    double value = 0;
    return value;
}

static void OutputResult(double targetDistance,
                         double miss)
{
    if (miss < 0.001)
    {
        printf("balicek dorucen!\n");
    }

    else if (miss > 0)
    {
        printf("cil ve vzdalenosti %.1lf m byl prestrelen o %.1lf m\n", targetDistance, fabs(miss));
    }

    else
    {
        printf("do cile ve vzdalenosti %.1lf chybi %.2lf\n", targetDistance, fabs(miss));
    }

    return;
}

#pragma endregion

/// <summary>
/// Hlavni cast programu 03 - Doruceni.
/// </summary>
int main(void)
{
    // 1. ziskani vstupu
    double velocity = InputReal("Zadej pocatecni rychlost");
    double altitude = InputReal("Zadej vysku");
    double targetDistance = InputReal("Zadej vzdalenost k cili");
    double targetRadius = InputReal("Zadej velikost cile");

    // provedeni vypoctu
    double distance = ComputeImpactDistance(velocity, altitude);
    double miss = IsDelivered(distance, targetDistance, targetRadius);

    // vyhodnoceni vysledku
    OutputResult(targetDistance, miss);
    return 0;
}