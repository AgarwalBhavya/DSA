#include<stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;

}

int isFull(struct queue *q){
    if(q->r=q->size-1){
        return -1;
    }
    return 0;

}

void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("Full");
    }
    else{
        q->r++;
        q->arr[q->r]= val;
    }
}

int dequeue(struct queue *q,int val){
    int a=-1;
    if(isEmpty(q)){
        printf("Full");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

//circular queue
void enqueue(struct queue *q,int val){
    if((q->r+1)%q->size==q->f){
        printf("Overflow");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]= val;
    }
}

int dequeue(struct queue *q){
    int val=-1;
    if(isEmpty(q)){
        printf("Full");
    }
    else{
        q->f=(q->f+1)%q->size;
        val=q->arr[q->f];
    }
    return val;
}


int main(){
    struct queue q;
    q.size=100;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));


    return 0;
}