#include "../header/Bank.h"

using std::cout, std::cin, std::endl;

Bank::Bank() {
    // initialize default values

    name = "default name";
    address = "default address";
    age = 18;
    gender = "defualt gender";
    balance = 0;
    deposit = 0;
    withdrawal = 0;
}

Bank::Bank(string name, string address, string gender, int age, int id, double balance, double deposit, double withdrawal){
    this->name = name;
    this->address = address;
    this->gender = gender;
    this->age = age;
    this->id = id;
    this->balance = balance;
    this->deposit = deposit;
    this->withdrawal = withdrawal;
}
void Bank::setName(string name) {
    this->name = name;
}

string Bank::getName() {
    return this->name;
}

void Bank::setAddress(string address) {
    this->address = address;
}

string Bank::getAddress() {
    return this->address;
}

void Bank::setGender(string gender) {
    this->gender = gender;
}

string Bank::getGender() {
    return this->gender;
}

void Bank::setAge(int age) {
    this->age = age;
}

int Bank::getAge() {
    return this->age;
}

void Bank::setID(int id) {  // should pass in the total users in the bank obj and +1
    this->id = id;
}

int Bank::getID() {
    return this->id;
}

void Bank::setBalance(double balance) {
    this->balance = balance;
}

double Bank::getBalance() {
    return this->balance;
}

void Bank::setDeposit(double deposit) {
    this->deposit = deposit;
}

double Bank::getDeposit() {
    return this->deposit;
}

void Bank::setWithdrawal(double withdrawal) {
    this->withdrawal = withdrawal;
}

double Bank::getWithdrawal() {
    return this->withdrawal;
}

void Bank::printUser() {
    cout << "\nName: " << this->name
         << "\nAddress: " << this->address
         << "\nGender: " << this->gender
         << "\nAge: " << this->age
         << "\nBalance: " << this->balance
         << "\nLast deposit: " << this->deposit
         << "\nLast withdrawal: " << this->withdrawal;
}

void BankOfBanks() {
    cout << "bank of banks\n\n";

    // Bank bank("the name", "the address", "the gender", 18, 0, 1000, 1000, 1000);
    // bank.printUser();

    string name, address, gender;
    int age, id, maxUsers;
    double balance, deposit, withdrawal;

    cout << "Enter the number of users: ";
    cin >> maxUsers;
    cin.ignore();

    std::vector<Bank> bank(maxUsers);

    for (int i = 0; i < maxUsers; i++) {
        cout << "\nEnter details for user " << i+1 << ":\n";
        cout << "Name: ";
        getline(cin, name);

        cout << "Address: ";
        getline(cin, address);

        cout << "Gender: ";
        getline(cin, gender);

        cout << "Age: ";
        cin >> age; // do isInt()

        cout << "Id: ";
        cin >> id;

        cout << "Balance: ";
        cin >> balance;

        cout << "Deposit: ";
        cin >> deposit;

        cout << "Withdrawal: "; // might void
        cin >> withdrawal;

        cin.ignore();

        bank[i] = Bank(name, address, gender, age, id, balance, deposit, withdrawal);
    }

    for (int i = 0; i < maxUsers; i++) {
        cout << "Details for user " << i+1 << ":\n";
        bank[i].printUser();
    }
}