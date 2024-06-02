#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    while(low<=high)
    {
        mid = (low+high)/2;}
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    return -1;
}
