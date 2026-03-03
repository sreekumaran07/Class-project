#include<stdio.h>
struct Rectangle {
    float length;
    float width;
};
float area(struct Rectangle r)     { return r.length * r.width; }
float perimeter(struct Rectangle r){ return 2*(r.length + r.width); }
int main()
{
    struct Rectangle r;
    printf("Enter length and width: ");
    scanf("%f %f", &r.length, &r.width);
    printf("Area      = %.2f\n", area(r));
    printf("Perimeter = %.2f\n", perimeter(r));
    return 0;
}
