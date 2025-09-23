#include <iostream>
using namespace std;

bool binarySearch(int arr[] , int s , int e , int target){
    if(s>e){
        return false;
    }
    int mid = (s+e)/2 ;
    if(arr[mid] == target){
        return true;
    }else if(arr[mid]>target){
        return binarySearch(arr , s , mid-1 ,target);
    }else{
        return binarySearch(arr , mid+1 , e , target);
    }
}


int main() {
    
    int arr[5] = {1,4,6,3,7};
    int size = 5;
    int target = 4;
    
    if(binarySearch(arr , 0 , size-1 , target)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    

    return 0;
}