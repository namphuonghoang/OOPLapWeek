#include "Function.h"

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void Input(Fraction& f)
{
    cout << "Enter the numerator: ";
    cin >> f.numerator;

    do
    {
        cout << "Enter the denominator (cannot be zero): ";
        cin >> f.denominator;
    } while (f.denominator == 0);
}

void Output(Fraction f)
{
    cout << f.numerator << "/" << f.denominator<<endl;
}

Fraction Add2Fractions(Fraction f1, Fraction f2)
{
    int result_num = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    int result_den = f1.denominator * f2.denominator;
    Fraction result = { result_num, result_den };
    return result;
}

Fraction Substract2Fractions(Fraction f1, Fraction f2)
{
    int result_num = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    int result_den = f1.denominator * f2.denominator;
    Fraction result = { result_num, result_den };
    return result;
}

Fraction Multiply2Fractions(Fraction f1, Fraction f2)
{
    int result_num = f1.numerator * f2.numerator;
    int result_den = f1.denominator * f2.denominator;
    Fraction result = { result_num, result_den };
    return result;
}

Fraction Divide2fractions(Fraction f1, Fraction f2)
{
    if (f2.numerator == 0)
    {
        cout << "Can not devide!" << endl;
        return f2;
    }
    int result_num = f1.numerator * f2.denominator;
    int result_den = f1.denominator * f2.numerator;
    Fraction result = { result_num, result_den };
    return result;
}

void Reduce(Fraction& f)
{
    int common_divisor = gcd(f.numerator, f.denominator);
    f.numerator /= common_divisor;
    f.denominator /= common_divisor;
}

int Compare(Fraction f1, Fraction f2)
{
    if (f1.numerator* f2.denominator < f2.numerator* f1.denominator)
    {
        return -1;
    }
    else if (f1.numerator * f2.denominator == f2.numerator * f1.denominator)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

bool IsPositive(Fraction f)
{
    return f.numerator > 0;
}

bool IsNegative(Fraction f)
{
    return f.numerator < 0;
}

bool IsZero(Fraction f)
{
    return f.numerator == 0;
}