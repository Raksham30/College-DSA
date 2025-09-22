#include <iostream>
using namespace std;

bool isSorted(int arr[] , int size){
    if(size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool ans = isSorted(arr+1 , size-1);
    return ans;
}



int main() {
    
    int arr[5] = {2,3,4,5,6};
    
    if(isSorted(arr , 5)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}