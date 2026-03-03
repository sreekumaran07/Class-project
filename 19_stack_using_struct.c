#include<stdio.h>
#define MAX 100
struct Stack {
    int data[MAX];
    int top;
};
void init(struct Stack *s)  { s->top = -1; }
int  isEmpty(struct Stack *s){ return s->top == -1; }
int  isFull(struct Stack *s) { return s->top == MAX-1; }
void push(struct Stack *s, int val)
{
    if(isFull(s))  { printf("Stack Overflow!\n"); return; }
    s->data[++s->top] = val;
    printf("Pushed %d\n", val);
}
int pop(struct Stack *s)
{
    if(isEmpty(s)) { printf("Stack Underflow!\n"); return -1; }
    return s->data[s->top--];
}
void display(struct Stack *s)
{
    if(isEmpty(s)) { printf("Stack is empty\n"); return; }
    printf("Stack (top to bottom): ");
    for(int i=s->top;i>=0;i--)
        printf("%d ", s->data[i]);
    printf("\n");
}
int main()
{
    struct Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    display(&s);
    printf("Popped: %d\n", pop(&s));
    display(&s);
    return 0;
}
