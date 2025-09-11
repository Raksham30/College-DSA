#include <iostream>
using namespace std;

//Taking Input of an array.

void takeInput(int arr[] , int size){
    for(int i = 0  ; i<size ; i++){
        cin>>arr[i];
    }
}

//Printing an Array .

void printOutput(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

// Insertion Sort using FOR LOOP. 

void insertionSort(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        int temp = arr[i] ;
        int j = i-1;
        for(; j>=0 ; j--){
            if(temp>=arr[j]){
                break;
            }else{
                arr[j+1] = arr[j];
            }
        }
        arr[j+1] = temp;
    }
}

// Insertion Sort using WHILE LOOP.

void insertionSort2(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        int temp = arr[i];
        int j = i-1 ;
        while(j>=0){
            if(temp>=arr[j]){
                break;
            }else{
                arr[j+1] = arr[j];
                j--;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){

    // Take Size of Array .
    int size;
    cin>>size;

    //declaring an array.
    int arr[size];

    takeInput(arr , size);
    cout<<"Befor Insertion sort."<<endl;
    printOutput(arr , size);
    insertionSort2(arr , size);
    cout<<"After Insertion sort."<<endl;
    printOutput(arr, size);





    return 0;
}