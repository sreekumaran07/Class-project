#include<stdio.h>
struct Address {
    char city[50];
    char state[50];
    int pincode;
};
struct Person {
    char name[50];
    int age;
    struct Address addr;
};
int main()
{
    struct Person p;
    printf("Enter name and age: ");
    scanf("%s %d", p.name, &p.age);
    printf("Enter city, state, pincode: ");
    scanf("%s %s %d", p.addr.city, p.addr.state, &p.addr.pincode);
    printf("\n--- Person Info ---\n");
    printf("Name : %s\nAge  : %d\n", p.name, p.age);
    printf("City : %s\nState: %s\nPin  : %d\n",
           p.addr.city, p.addr.state, p.addr.pincode);
    return 0;
}
