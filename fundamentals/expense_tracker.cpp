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



void add_income(vector<Transaction> &transactions, float& total_income) {
    Transaction new_transact; 
    new_transact.type = "income"; 
    cout << "What category is the transaction?";
    cin >> new_transact.category;
    cout << "What is the amount?";
    cin >> new_transact.amount; 

    transactions.push_back(new_transact);
    total_income += new_transact.amount;


}

void add_expense(vector<Transaction> &transactions, float&total_expenses) {
    Transaction new_expense; 
    new_expense.type = "expense";
    cout << "What category is this expense?";
    cin >> new_expense.category;
    cout << "What is the amount?";
    cin >> new_expense.amount;

    transactions.push_back(new_expense);
    total_expenses += new_expense.amount;


}

void show_balance(float total_income, float total_expenses) {
    float total_balance = total_income - total_expenses;
    cout << "Total Balance: " << total_balance; 
}

void show_spending_breakdown() {
    
}

int main() {
    //start with the structure 

    vector<Transaction> transactions; 
    float total_income = 0;
    float total_expenses = 0;

    int input = 0;
    while (input != 5) {
         
    cout << "Menu: \n 1. Add Income \n 2. Add Expense \n 3. Show Balance \n 4. Show Spending Breakdown \n 5. Quit \n";
    cin >> input;
        switch (input) {
            case 1: 
                add_income(transactions, total_income);
                break;
            case 2: 
                add_expense(transactions, total_expenses);
                break; 
            case 3: 
                show_balance(total_income, total_expenses);
                break; 
            case 4: 
                show_spending_breakdown();
                break;
            case 5: 
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }

    return 0; 
}