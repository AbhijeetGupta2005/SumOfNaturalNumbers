#include<iostream>
using namespace std;

int sa(int arr[], int n){
    if(n>0){
        return arr[n-1]+sa(arr, n-1);
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array's elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Sum is: "<< sa(arr, n) << endl;
    cout<<endl;
    return 0;
}