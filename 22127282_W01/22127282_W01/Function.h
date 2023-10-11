#pragma once
#include <iostream>
using namespace std;

struct Fraction
{
	int numerator = 0;
	int denominator = 1;
};
int gcd(int a, int b);
void Input(Fraction &f);
void Output(Fraction f);
Fraction Add2Fractions(Fraction f1, Fraction f2);
Fraction Substract2Fractions(Fraction f1, Fraction f2);
Fraction Multiply2Fractions(Fraction f1, Fraction f2);
Fraction  Divide2fractions(Fraction f1, Fraction f2);
void Reduce(Fraction& f);
int Compare(Fraction f1, Fraction f2);
bool  IsPositive(Fraction f);
bool IsNegative(Fraction f);
bool IsZero(Fraction f);