#include <iostream>
using namespace std;

class Bankaccount{
    private:
    double balance;

    public:
    void setBalance(double bal){
        if(bal >= 0){
            balance = bal;
        }
        else{
            cout << "Invalid Balance" << endl;
        }
    }
    double getBalance(){
        return balance;
    }

};

int main()
{
    Bankaccount account;
    account.setBalance(1000);
    cout << "Balance : $" << account.getBalance() << endl;
    account.setBalance(-100);
    cout << "Balance : $" << account.getBalance() << endl;
    
    return 0;
}