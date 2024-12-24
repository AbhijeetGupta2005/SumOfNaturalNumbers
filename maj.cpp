//given an array of size nums of size n, return the majority element , the majority element is the the 
//element that appears more than n/2 times you may assume that the majority element always exist in the array

#include<iostream>
using namespace std;

int maj(int n, int arr[]){
    int el=arr[0], count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==el){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            el=arr[i];
            count=1;
        }
    }
    return el;

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) {
            count++;
        }
    }

    if (count > n / 2) {
        return el; // Valid majority element
    } else {
        return -1; // No majority element
    }
}

int main(){
    int n;
    cout<<"Enter the range of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element "<<i<<" of array: ";
        cin>>arr[i];
    }
    cout<<"The majority element of the array is :"<<maj(n, arr)<<endl;
}