#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int n;
  if (argc > 1) {
    n = atoi(argv[1]);
  } else {
    cout << "Odd Number: ";
    cin >> n;
  }

  for(int i = 1; i < n; i++) {
    if(i % 2 != 0) {
      cout << i << " ";
    }
  }
  return 0;
}
