#include<iostream>
using namespace std;

int nat(int n){
    if(n>0){
        return n+nat(n-1);
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    if (n <= 0) {
        cout << "Factorial is not defined for negative numbers and 0." << endl;
    } else {
        cout << "Factorial of " << n << " is: " << nat(n) << endl;
    }
    cout<<endl;
    return 0;
}