#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){

    for (int i = 0; i< n-2;i++){
        int minindex=i;
        for (int j = i; j<=n-1; j++){
            if (arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        int temp = arr[minindex];
        arr[minindex]= arr[i];
        arr[i] = temp;
    }
}
int main(){
    int n;
    cin >> n;
    //int arr[n];
    for (int i = 0; i<n;i++){
       // cin >> arr[i];
    }
    //selectionsort(arr,n);
}