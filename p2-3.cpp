// Use of class
#include <iostream>
using namespace std;

class person {
    char name[30];
    int age;

    public:
        void getdata(void);
        void display(void);
};

void person :: getdata(void) {
    cout << "\nEnter name: ";
    cin >> name;
    cout << "\nEnter age: ";
    cin >> age;
}

void person :: display(void){
    cout << "\nName: " << name;
    cout << "\nAge: " << age; 
}

int main(){
    person p;
    p.getdata();
    p.display();

    return 0;
}
