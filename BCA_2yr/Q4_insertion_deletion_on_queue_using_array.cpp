#include <stdio.h>
#include <stdlib.h>

struct queue
{
	int size;
	int f;   // first
	int r;   // rear
	int* arr;

	
};

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    // printf("inside enqueue\n");
    if(isFull(q))
    {
        printf("Queue is full can't enqueue: %d\n", val);
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q)
{
    // printf("inside dequeue\n");
    int a = -1;
    if(isEmpty(q))
    {
        printf("Queue is empty can't dequeue element: %d\n", q->f+1);
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main() {
    
    struct queue q;
	q.size = 4;
	q.f = q.r = 0;
	q.arr = (int*)malloc(q.size*sizeof(int));
    
    printf("Size of queue is: %d\n", sizeof(q.arr));
    
    if(isFull(&q)) { printf("Full\n"); }
    if(isEmpty(&q)) { printf("Empty\n"); }
    
    printf("eneueuing.... \n");
    
    
    enqueue(&q, 12);
    enqueue(&q, 14);
    enqueue(&q, 16);

    
    if(isFull(&q)) { printf("Full\n"); }
    if(isEmpty(&q)) { printf("Empty\n"); }

    printf("value of element is: %u\n", q.arr[1]);
    printf("value of element is: %u\n", q.arr[2]);
    printf("value of element is: %u\n", q.arr[3]);
    
    printf("Dequeuing... %d\n", dequeue(&q));
    printf("Dequeuing... %d\n", dequeue(&q));
    printf("Dequeuing... %d\n", dequeue(&q));
    
    enqueue(&q, 12);
    enqueue(&q, 14);
    if(isFull(&q)) { printf("Full\n"); }
    if(isEmpty(&q)) { printf("Empty\n"); }
    
    return 0;
}

