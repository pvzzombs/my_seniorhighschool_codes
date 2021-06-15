#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "The program you allows the user if he/she can vote:" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Enter Age: ";
    cin >> age;
    cout << "---------------------------------------------------" << endl;
    if(age >= 18){
        cout << "You can vote." << endl;
    }else{
        cout << "You are a minor." << endl;
    }
    cout << "---------------------------------------------------" << endl;
    cout << "           Teacher: Sir Brian Ruiz Pogi            " << endl;
    cout << "           By: Miles MJ V. Jamon                   " << endl;
    return 0;
}
