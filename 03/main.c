// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

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
    return;
}

int main(void)
{
    return 0;
}