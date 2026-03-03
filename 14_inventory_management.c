#include<stdio.h>
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);
    struct Product p[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter id, name, quantity, price: ");
        scanf("%d %s %d %f", &p[i].id, p[i].name, &p[i].quantity, &p[i].price);
    }
    float total=0;
    printf("\n--- Inventory ---\n");
    for(int i=0;i<n;i++)
    {
        float val = p[i].quantity * p[i].price;
        total += val;
        printf("ID:%d | %s | Qty:%d | Price:%.2f | Value:%.2f\n",
               p[i].id, p[i].name, p[i].quantity, p[i].price, val);
    }
    printf("Total Inventory Value: %.2f\n", total);
    return 0;
}
