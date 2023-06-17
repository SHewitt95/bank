/**
There is a Bank.
People can create Accounts, but must be 18+.
People can create Accounts on behalf of People who are <18.
The Bank stores Accounts.
Accounts have balances, names and IDs.
People (18+) can request from or send money to each other's Accounts.
People (18+) can approve or deny transaction requests for Accounts they've made on others' behalf.
The Bank can approve or deny transaction requests in a Queue.

================================================
Phase 1

- Welcome to the Bank! What would you like to do?
* [0][0] Login with User ID -> [1][0]
* [0][1] Create User ID
-- Increment ID # from last ID, log new ID, welcome user, then [2][0]

================================================
Phase 2
* [1][0] Enter your User ID
-- If ID exists, [2][0]. Else, log error message and [0][0].

================================================
Phase 3
* [2][0] Create an Account
* [2][1] Deposit money
* [2][2] Withdraw money
* [2][3] Send money
* [2][4] Request money
* [2][5] View money requests (0)
* [2][6] View Accounts

================================================
Phase N

*/

#include <iostream>

using std::cout;
using std::cin;

int main() {

    cout << "Welcome to the Bank! What would you like to do?\n";
    
    int input = 0;
    const int SENTINEL = -1;
    while (input > SENTINEL) {
        cout << "[0] Login with User ID\n";
        cout << "[1] Create User ID\n\n";
        cout << "Input: ";
        cin >> input;
    }


    return 0;
}