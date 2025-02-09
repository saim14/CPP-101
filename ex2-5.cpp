#include<iostream>
using namespace std;

int main(){
    float tempInF, tempInC;
    cout << "Enter temperature in fahrenheit: ";
    cin >> tempInF;
    tempInC = (tempInF - 32.0) * (5.0/9.0);
    cout << "Temperature in Celcius: " << tempInC << "\n";
    return 0;
}