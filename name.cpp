#include<iostream>
using namespace std;

int main(){

    int choice;
    string first, last;
    while (true) {
        cout << "Gender\n";
        cout << "1. Male\n";
        cout << "2. Female\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "First Name: ";
                cin >> first;
                cout << "Last Name: ";
                cin >> last;
                cout<<"Name: "<<first<<" "<<last<<endl;
                break;
            case 2:
                cout << "First Name: ";
                cin >> first;
                cout << "Last Name: ";
                cin >> last;
                cout<<"Name: "<<first<<" "<<last<<endl;
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    cout<<"Name: "<<first<<" "<<last;
}