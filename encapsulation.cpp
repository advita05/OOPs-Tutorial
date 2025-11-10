// Encapsulation is wrapping up data and methods into a single unit (class)

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string password; // data hiding

public:
    string accountID;
    double balance;
    string username;

    void setPassword(string pass) {
        password = pass;
    }

    string getPassword() {
        return password;
    }
};

int main() {
    Account a1;

    a1.username = "Advita";
    a1.accountID = "ACC123";
    a1.balance = 5000.0;
    a1.setPassword("advita123");

    cout << "Username: " << a1.username << endl;
    cout << "Account ID: " << a1.accountID << endl;
    cout << "Balance: " << a1.balance << endl;
    cout << "Password: " << a1.getPassword() << endl;

    return 0;
}
