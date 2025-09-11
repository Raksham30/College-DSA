#include <iostream>
using namespace std;


//Bubble Sort.

void bubbleSort(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        for(int j = 0 ; j<size ; j++){
            if(arr[i]>arr[j]){
                swap(arr[i] , arr[j]);
            }
        }
    }
}

int main(){
    int arr[5] = {2,3,1,6,2};
    bubbleSort(arr,5);
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}