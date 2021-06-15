#include <iostream>

using namespace std;

int main()
{

    int a;
    int b;

    cout << "Relational Sequence of a Number" << endl;
    cout << "-------------------------------" << endl;
    cout << "Input first number: ";
    cin >> a;
    cout << "Input second number: ";
    cin >> b;
    cout << "-------------------------------" << endl;

    if(a > b){
      cout << a << " is greater than " << b << endl;
    }else if(a < b){
      cout << a << " is less than " << b << endl;
    }else {
      cout << a << " is equal to " << b << endl;
    }
    return 0;
}
