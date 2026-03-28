#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
int main() {
    cout << "Hello world \n"; 
    return 0;
}
*/
//use ctrl + shift + b to compile and run the program
//use \n to print a new line
// cout can handle mathematitcal operations


//endl will also print a new line

/*
Variable types: 
integer: int
floating point: float
double: double
character: char
boolean: bool
string: string
*/



//in c++, you need to declare variable type 

//string name = "Ryan";
//int age = 19;
//can declare multiple variables at once
//int x = 1, y = 2, z = 3;

//const int age_2 = 19;

//use cin for user input 

/*
boolean = 1 byte 
char = 1 byte
int = 4 bytes
float = 4 bytes
double = 8 bytes
string = 2 bytes per character
use sizeof() to get the size of a variable
*/

int check_size(int x) {
    cout << "Size of int: " << sizeof(x) << " bytes" << endl;
    return 0;
}

int concatenate(string x, string y) {
    string result = x + y;
    return result.size();
}

//auto automatically detects the type of variable 

//increment and decrment go before variable name (++x, --x)
//increment and decrment go after variable name (x++, x--)
//increment and decrment can be used in loops

//+=, -=, *=, /=, %= are assignment operators

//==, !=, >, <, >=, <= are comparison operators

//&&, ||, ! are logical operators

//&, |, ^ are bitwise operators


/*
string methods:
    .size() - returns the length of the string
    .length() - returns the length of the string
    .empty() - returns true if the string is empty
    .clear() - clears the string
    .append() - appends a string to the end of the string
    .insert() - inserts a string into the string
    .erase() - erases a string from the string
    .replace() - replaces a string with another string
    .find() - finds a string in the string
    .at() - returns the character at a given index
*/

//string index starts at 0

//shorthand for if statements

// variable = (condition) ? expression1 : expression2;

//int time = 20;

//string result = (time < 18) ? "Good day." : "Good evening.";

//c++ also has switch statements 

/*
switch (expression) {
    case constant1:
        // code block
        break;
    case constant2:
        // code block
        break;
}
*/


/*
while loop: 
int i = 0;
while (i < 5) {
    cout << i << endl;
    i++;
}

*/

//while loops and for loops 
/*
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}

int countdown = 3;
while (countdown > 0) {
cout << countdown << endl;
countdown--; 
}

*/

//arrays: specify type and number of elements 
// string cars[2] = {"Volvo", "BMW"};

//change an array element: cars[0] = "x"


//a vector is a dynamic array that can change its size 

//vector<type> name = {x, y, z};
//use vector.push_back(element) to add elements to the vector
//use vector.pop_back() to remove the last element
//use vector.size() to get the size of the vector
//use vector.clear() to clear the vector
//use vector.empty() to check if the vector is empty
//use vector.at(index) to get the element at a given index
//use vector.front() to get the first element
//use vector.back() to get the last element




int main() {
    // int x = 1;
    // check_size(x);

    // cout << concatenate("Hello", " World") << endl;
    // string name; 
    // cout << "Enter your name: ";
    // getline (cin, name);
    // cout << "Hello " << name << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i*j << " "; 
        }
        cout << "\n";
    }

    string word  = "hello";
    for (char c : word) {
        cout << c << " ";
    }

    //looping through an array 
    string cars[3] = {"Volvo", "BMW", "Mercedes"};
    for (string car : cars) {
        cout << car << " ";
    }



    
    return 0;
}