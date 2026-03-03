#include<stdio.h>
struct Account {
    int accno;
    char name[50];
    float balance;
};
void deposit(struct Account *a, float amount)
{
    a->balance += amount;
    printf("Deposited %.2f | New Balance: %.2f\n", amount, a->balance);
}
void withdraw(struct Account *a, float amount)
{
    if(amount > a->balance)
        printf("Insufficient balance!\n");
    else
    {
        a->balance -= amount;
        printf("Withdrawn %.2f | New Balance: %.2f\n", amount, a->balance);
    }
}
int main()
{
    struct Account a;
    printf("Enter account number, name, initial balance: ");
    scanf("%d %s %f", &a.accno, a.name, &a.balance);
    float amt;
    printf("Enter deposit amount: ");
    scanf("%f", &amt);
    deposit(&a, amt);
    printf("Enter withdraw amount: ");
    scanf("%f", &amt);
    withdraw(&a, amt);
    return 0;
}
