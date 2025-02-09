#include<iostream>

using namespace std;

int main(){
    float n1, n2;
    cout << "\nEnter two numbers: \n";
    cin >> n1;
    cin >> n2;
    if(n1>n2){
        cout << n1 << "\n";
    } else {
        cout << n2 << "\n";
    }
    return 0;
}