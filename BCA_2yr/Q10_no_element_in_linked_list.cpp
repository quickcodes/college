#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int lenOFLinkedList(struct Node *ptr)
{
    int count = 0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void LinkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf(" Element is -> %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Memory allocation
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    // By the way,
    // head->data is equivalent to (*head).data
    // head->next is equivalent to (*head).next
    // header
    head->data = 13;
    head->next = second;
    // link btw 1 or 2
    second->data = 45;
    second->next = third;
    // link btw 2 or 3
    third->data = 73;
    third->next = fourth;
    // link btw 2 or 3
    fourth->data = 98;
    fourth->next = NULL;

    int len = lenOFLinkedList(head);
    printf("length is %d\n", len);
    LinkedListTraversal(head);

    return 0;
}

