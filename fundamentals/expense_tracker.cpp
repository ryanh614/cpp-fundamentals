#include <iostream>
#include <vector>
using namespace std;


//personal budget tracker using vectors and structs 
//add income or expense with category and amount 
//store all transations in a vector 
//show total income, expenses, and balance
//show spending breakdown by category 
//keep running until user quits 




//define struct for transaction 
struct Transaction {
    string type;
    string category;
    float amount; 
}; 

vector<Transaction> transactions; 
float total_income = 0;
float total_expenses = 0;
float balance = 0;

void add_income() {
    cin >> total_income; 
}

void add_expense() {
    cin >> total_expenses; 
}

void show_balance() {
    cout << "Balance: " << balance << endl;
}

void show_spending_breakdown() {
    cout << "Spending Breakdown: " << endl;
    for (Transaction t : transactions) {
        cout << t.category << ": " << t.amount << endl;
    }
}

int main() {
    //start with the structure 
    int input; 
    cout << "Menu: \n 1. Add Income \n 2. Add Expense \n 3. Show Balance \n 4. Show Spending Breakdown \n 5. Quit \n";
    cin >> input; 
    while (input != 5) {
        switch (input) {
            case 1: 
                add_income();
                break;
            case 2: 
                add_expense();
                break; 
            case 3: 
                show_balance();
                break; 
            case 4: 
                show_spending_breakdown();
        }
    }

    return 0; 
}