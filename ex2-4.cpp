#include<iostream>

using namespace std;

int main(){
    float a, b, c, x;
    cout << "Enter 3 numbers: \n";
    cin >> a >> b >> c;
    x = a / (b-c);
    cout << "a/b-c = " << x << "\n";
    return 0;
}