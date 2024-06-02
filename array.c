#include<stdio.h>

void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(arr[i]);
    }
}

int indinsertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i++)
    {
        arr[i+1]=arr[i];
    }
    arr[index] = element;
    return 1;
}

int inddeletion(int arr[],int size,int index)
{
    for (int i = index; i <= size; i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;
}

int main()
{
    int arr[100]={1,2,3,4};
    return 0;
}