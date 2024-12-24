#include<iostream>
using namespace std;

int fact(int n){
    if(n>0){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is: " << fact(n) << endl;
    }
    cout<<endl;
    return 0;
}