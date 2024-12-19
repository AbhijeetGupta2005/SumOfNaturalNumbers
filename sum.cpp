#include<iostream>
using namespace std;

int main(){
  unsigned long long n;
  cout << "Natural Number: ";
  cin >> n;
  unsigned long long sum = n * (n + 1) / 2;
  cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
  return 0;
}
