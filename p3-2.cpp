#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int *arr;
    int size;

    cout << "Enter the size of the integer array: ";
    cin >> size;

    cout << "Creating an array of size " << size << "..";
    arr = new int[size]; // dynamic allocation

    cout << "\nDynamic allocation of memory for array arr is successful."; 

    delete arr; // clear the memory

    getch();
}