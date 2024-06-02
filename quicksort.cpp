#include <iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if (i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(int arr[], int low,int high ){
    if(low<high){
        int pinindex = partition(arr,low,high);
        qs(arr,low,pinindex-1);
        qs(arr,pinindex+1,high);
    }
}
//vector<int> quickSort(int arr[])
//{
    //qs(arr,0,arr.size()-1);
    //return arr;
//}