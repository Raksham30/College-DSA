#include <iostream>
using namespace std;

int fact(int n){
    
    //base case.
    if(n == 1 || n == 0){
        return 1;
    }
    
    //Recursive call.
    return n * fact(n-1) ;
}

int main(){

    cout<<fact(3);
    return 0;
}