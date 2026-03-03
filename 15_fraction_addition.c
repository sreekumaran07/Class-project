#include<stdio.h>
struct Fraction {
    int numerator;
    int denominator;
};
int gcd(int a, int b){ return b==0 ? a : gcd(b, a%b); }
struct Fraction addFraction(struct Fraction f1, struct Fraction f2)
{
    struct Fraction result;
    result.numerator   = f1.numerator*f2.denominator + f2.numerator*f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    int g = gcd(result.numerator, result.denominator);
    result.numerator   /= g;
    result.denominator /= g;
    return result;
}
int main()
{
    struct Fraction f1, f2, f3;
    printf("Enter fraction 1 (numerator denominator): ");
    scanf("%d %d", &f1.numerator, &f1.denominator);
    printf("Enter fraction 2 (numerator denominator): ");
    scanf("%d %d", &f2.numerator, &f2.denominator);
    f3 = addFraction(f1, f2);
    printf("Sum = %d/%d\n", f3.numerator, f3.denominator);
    return 0;
}
