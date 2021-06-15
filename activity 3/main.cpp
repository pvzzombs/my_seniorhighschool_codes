#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Input three (3) value and display the highest number" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input first number: ";
    cin >> a;
    cout << "Input second number: ";
    cin >> b;
    cout << "Input third number: ";
    cin >> c;
    cout << "----------------------------------------------------" << endl;

    if(a == b && b == c){
        cout << a << " is the largest number. " << endl;
    }else if(a >= b && a >= c){
        cout << a << " is the largest number." << endl;
    }else if(b >= a && b >= c){
        cout << b << " is the largest number." << endl;
    }else if(c >= a && c >= b){
        cout << c << " is the largest number." << endl;
    }else{

    }
    return 0;
}
