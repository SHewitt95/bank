/**
There is a Bank.
People can create Accounts, but must be 18+.
People can create Accounts on behalf of People who are <18.
The Bank stores Accounts.
Accounts have balances, names and IDs.
People (18+) can request from or send money to each other's Accounts.
People (18+) can approve or deny transaction requests for Accounts they've made on others' behalf.
The Bank can approve or deny transaction requests in a Queue.

- Welcome to the Bank! What would you like to do?
* [0][0] Login with User ID
* [0][1] Create User ID
...
* [1][0] Create an Account
* [1][1] Deposit money
* [1][2] Withdraw money
* [1][3] Send money
* [1][4] Request money
* [1][5] View money requests (0) -> [2][0]
* [1][6] View Accounts
...
* [2][0] Handle request
...
* [3][0] Deny request
* [3][1] Approve request

========================================================

[1][0]
- Enter your numeric ID:
-- If ID exists, append account. Else, associate ID with a new account.
-- Returns numeric ID of new account.

[1][1] Enter your deposit:
-- Input a double

[1][2] Enter your withdrawl amount:
-- If withdrawl < account, withdraw. Else, deny withdrawl.

[1][3] Enter target account ID:
-- If account ID valid, proceed. Else, exit.
-- If send < account, send the money. Else, deny send.

[1][4] Enter requested account ID:
-- If account ID valid, proceed. Else, exit.
-- Send request to account ID

[1][5] Here are pending requests
-- Show names of people requesting money.
-- Show submenu [2][0]

*/