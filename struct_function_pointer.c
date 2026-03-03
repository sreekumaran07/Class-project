#include<stdio.h>

struct Product
{
    int id;
    float price;
};

void updatePrice(struct Product *p)
{
    p->price += 100;
}

int main()
{
    struct Product p1 = {101, 500};

    updatePrice(&p1);

    printf("ID: %d\n", p1.id);
    printf("Updated Price: %.2f\n", p1.price);

    return 0;
}
