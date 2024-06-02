#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node{
    int data;
    struct Node* next;
};

void lltraversal(struct Node * ptr){
    while (ptr != NULL)
    {
        printf(" Element: %d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertafternode(struct Node *head, int data, int index ){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node * p = (struct Node *) malloc(sizeof(struct Node));
    p ->next = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    };
    ptr->next = p->next;
    p ->next = ptr;

    return head;

}

struct Node * insertatfirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

struct Node * insertatindex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insertatend(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p ->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node* deletefirst(struct Node *head){
    struct Node* p = head;
    head = head -> next;
    free(p);
    return head;
}

struct Node* deleteatIndex(struct Node *head,int index){
    struct Node* p = head;
    struct Node* q = head -> next;
    for (int i = 0; i < index-1; i++)
    {
        p = p ->next;
        q = q->next;
    }
    p->next = q->next;  
    return head;
}

struct Node* deleteatlast(struct Node *head){
    struct Node* p = head;
    struct Node* q = head -> next;
    while (q->next != NULL)
    {
        p = p ->next;
        q = q->next;
    }
    p->next = NULL;  
    free(q);
    return head;
}

struct Node* deleteatGivenValue(struct Node *head,int val){
    struct Node* p = head;
    struct Node* q = head -> next;
    while (q->data!=val && q->next != NULL)
    {
        p = p ->next;
        q = q->next;
    }
    if(q->data == val){
        p->next=q->next;
        free(q);
    }
    return head;
}

int main() {
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 8;
    third->next = NULL;

    lltravel(head);
    printf("\nAfter Ins at 1st: \n");

    head = insat1(head,97);
    lltravel(head);

    printf("\nAfter Ins at 3: \n");
    head = insatb(head,98,3);

    lltravel(head);
    printf("\nAfter Ins at end: \n");

    head = insatend(head,72);
    lltravel(head);
    return 0;
}