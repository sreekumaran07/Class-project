#include<stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex add(struct Complex a, struct Complex b)
{
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
int main()
{
    struct Complex c1, c2, c3;
    printf("Enter real and imaginary parts of 1st complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of 2nd complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    c3 = add(c1, c2);
    printf("Sum = %.2f + %.2fi\n", c3.real, c3.imag);
    return 0;
}
