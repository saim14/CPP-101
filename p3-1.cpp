// Scope resolution Operator
#include<iostream>
using namespace std;

int m = 10; // global m

int main(){
    int m = 20; // m redeclared, local to main

    {
        int k = m;
        int m = 30; // m declared again, local to inner block

        cout << "We are in inner block \n";
        cout << "k = " << k << "\n";
        cout << "m = " << m << "\n";
        cout << " ::m = " << ::m << "\n";
    }

    cout << "\nWe are in outer block \n";
    cout << "m = " << m << "\n";
    cout << "::m = " << ::m << "\n";

    return 0;
}