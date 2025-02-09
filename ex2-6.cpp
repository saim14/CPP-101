#include<iostream>
using namespace std;

class temp {
    float tempInF, tempInC;
    public:
        void getF(void);
        void displayC(void);
};

void temp :: getF(void){
    cout << "Enter temperature in fahrenheit: ";
    cin >> tempInF;
}

void temp :: displayC(void){
    tempInC = (tempInF - 32.0) * (5.0/9.0);
    cout << "Temperature in Celcius: " << tempInC << "\n";
}

int main(){
    temp t;
    t.getF();
    t.displayC();
}