#include<iostream>
using namespace std;

int sin(int n, int nums[]){
    int el=0;
    for(int i=0; i<n; i++){
        el ^=nums[i];
    }
    return el;
}

int main(){
    int n;
    cout<<"Enter the range of array: ";
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element "<<i<<" of array: ";
        cin>>nums[i];
    }
    cout<<"The majority element of the array is :"<<sin(n, nums)<<endl;
}