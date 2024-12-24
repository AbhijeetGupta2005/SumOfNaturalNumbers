//Design a cpp program to stimulate a banking system using polymorphism, create a base class account eith a virtual method calculateinterest(). Use the derived classes savingaccount() and currentaccount() to implement specific interest calculation logic
//Saving Account= Balance*Rate*Time, Current Account= No interset but includes a maintenance fee deduction

#include<iostream>
using namespace std;

class Bank_Account{
    protected:
    double balance, rate;
    int time;
    public:
    Bank_Account(double b, double r, int t): balance(b), rate(r), time(t){}
    virtual double calculateinterest()=0;
};

class Saving_Account: public Bank_Account{
    public:
    Saving_Account(double b, double r, int t): Bank_Account(b, r, t){}
    double calculateinterest() override{
        return balance*rate*time;
     }
};

class Current_Account: public Bank_Account{
    public:
    Current_Account(double b, int t): Bank_Account(b, 0, t){}
    double calculateinterest() override{
        int maintenance_fees=50.0;
        return -maintenance_fees;
     }
};

int main(){
    double balance, rate;
    int time;
    cout << "Enter balance, rate (in %), and time for Saving Account: ";
    cin >> balance >> rate >> time;
    Saving_Account saving(balance, rate, time);

    cout << "Enter balance and time for Current Account: ";
    cin >> balance >> time;
    Current_Account current(balance, time);

    cout << "Interest for Saving Account: $" << saving.calculateinterest() << endl;

    cout << "Interest for Current Account (including maintenance fee): $" << current.calculateinterest() << endl;

    return 0;
}