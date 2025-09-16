#include <iostream>

using namespace std;

int pow(int n){
    
    //base case.
    if(n == 0){
        return 1;
    }

    //Recursice Function
    int smallerProblem = pow(n-1) ;
    int biggerProblem = 2 * smallerProblem; 
    return biggerProblem ;

}

int main(){
    cout<<pow(5);
    return 0;
}