#include<stdio.h>
#include<stdlib.h>

struct Car
{
    char brand[100];
    int year;
    float price;
};

int main()
{
    struct Car *ptr;

    ptr = (struct Car*)malloc(sizeof(struct Car));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter brand: ");
    scanf("%s", ptr->brand);

    printf("Enter year: ");
    scanf("%d", &ptr->year);

    printf("Enter price: ");
    scanf("%f", &ptr->price);

    printf("\nCar Details:\n");
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);
    printf("Price: %.2f\n", ptr->price);

    free(ptr);

    return 0;
}
