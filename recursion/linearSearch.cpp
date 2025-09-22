#include <iostream>
using namespace std;

bool linearSearch(int arr[] , int size , int target){
    if(size == 0){
        return false;
    }
    if(arr[0] == target){
        return true;
    }
    bool ans = linearSearch(arr+1,size-1 , target);
    return ans;
}


int main() {
    
    int arr[5] = {1,4,6,3,7};
    int size = 5;
    int target = 99; //Not found for this input...
    int target2 = 4 ; //Found for this input...
  
    if(linearSearch(arr,size,target)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    if(linearSearch(arr,size,target2)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}