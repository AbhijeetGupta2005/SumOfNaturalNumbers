#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digitCount = countDigits(num);
    cout << "Number of digits in " << num << " is: " << digitCount << endl;

    return 0;
}
