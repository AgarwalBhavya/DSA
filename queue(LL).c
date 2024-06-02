#include<stdio.h>
#include <stdlib.h>

struct Node* f = NULL;
struct Node* r = NULL;

struct Node{
    int data;
    struct Node* next;
};

void linkedlistTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf(ptr->data);
        ptr=ptr->next;
    }
}

void enqueue(struct Node* f,struct Node* r,int val){
    struct Node* n = (struct Node* )malloc(sizeof(struct Node));
    if (n == NULL){
        printf("FULL");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f == NULL){
            f = r = n;
        }
        else{
            r ->next = n;
        }
    }
}

int dequeue(){
    int val=-1;
    struct Node *ptr;
    if (f == NULL){
        printf("EMPTY");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}


int main(){
    linkedlistTraversal(f);
    enqueue(f,r,34);
    linkedlistTraversal(f);

    return 0;
}