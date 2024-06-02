#include<stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack*ptr){
    if (ptr->top ==-1){
        return 1;
    }
    return 0;
}

int isFull(struct stack*ptr){
    if(ptr->top == ptr->size -1){
        return -1;
    }
    return 0;
}

void push(struct stack*ptr,int val){
    if (isFull(ptr)){
        printf("Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(struct stack*ptr,int val){
    if (isEmpty(ptr)){
        printf("Underflow");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void peek(struct stack*ptr,int val){
    if(ptr->top-val+1<0){
        printf("Not valid position");
        return -1;
    }
    else{
        return ptr->arr[ptr->top-val+1];
    }
}
int main(){
    struct stack* s=(struct stack* )malloc(sizeof(struct stack));
    s->size= 80;
    s->top = -1;
    s->arr = (int* )malloc(s->size*sizeof(int));

    if (isEmpty(s)){
        printf("Empty");
    }
    else{
        printf("Not empty");
    }
    return 0;
}