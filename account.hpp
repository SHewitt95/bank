#pragma once
#include "person.hpp"

class Account {
private:
    // Bank* bank;
    Person* owner;
    double balance;
    int id;

public:
    Account(Person* owner = nullptr, double balance = 0.0, int id = 0);

    bool request_send(double amount = 0, Account* account = nullptr, Person* requester = nullptr);
    bool request_request(double amount = 0, Account* account = nullptr, Person* requester = nullptr);
    double get_balance(Person* requester = nullptr);
    Person* get_owner(Person* requester = nullptr);
    int get_id(Person* requester = nullptr);
};