#include<stdio.h>
#define MAX 100
struct Queue {
    int data[MAX];
    int front;
    int rear;
};
void init(struct Queue *q)   { q->front = 0; q->rear = -1; }
int  isEmpty(struct Queue *q){ return q->rear < q->front; }
int  isFull(struct Queue *q) { return q->rear == MAX-1; }
void enqueue(struct Queue *q, int val)
{
    if(isFull(q))  { printf("Queue Full!\n"); return; }
    q->data[++q->rear] = val;
    printf("Enqueued %d\n", val);
}
int dequeue(struct Queue *q)
{
    if(isEmpty(q)) { printf("Queue Empty!\n"); return -1; }
    return q->data[q->front++];
}
void display(struct Queue *q)
{
    if(isEmpty(q)) { printf("Queue is empty\n"); return; }
    printf("Queue (front to rear): ");
    for(int i=q->front;i<=q->rear;i++)
        printf("%d ", q->data[i]);
    printf("\n");
}
int main()
{
    struct Queue q;
    init(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);
    printf("Dequeued: %d\n", dequeue(&q));
    display(&q);
    return 0;
}
