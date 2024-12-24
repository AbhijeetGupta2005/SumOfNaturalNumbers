#include<iostream>
#include<cmath>
using namespace std;
int area(double r){
    double area=3.14*r*r;
    return area;
}
int area(int l, int b){
    int area=l*b;
    return area;
}
int area(int a, int b, int c){
    int s=(a+b+c)/2;
    int area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main(){
    int len, bth, a, b, c;
    double rad;
    cout<<"Radius of circle: ";
    cin>>rad;
    cout<<"Length and breadth of rectangle: ";
    cin>>len>>bth;
    cout<<"Length of the three sides of triangle: ";
    cin>>a>>b>>c;
    cout<<"Area of the circle for radius "<<rad<<": "<<area(rad)<<" sq. cm"<<endl;
    cout<<"Area of the rectangle for length and breadth "<<len<<" and "<<bth<<": "<<area(len, bth)<<" sq. cm"<<endl;
    cout<<"Area of the triangle for sides "<<a<<" ,"<<b<<" and "<<c<<": "<<area(a, b, c)<<" sq. cm"<<endl;
}