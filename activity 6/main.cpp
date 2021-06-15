#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int integer;
    float output;

    cout << "==================================================================" << endl;
    cout << "    This program allows you to get the square root of a number    " << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "    Enter a number:    ";
    cin >> integer;
    output = sqrt(integer);
    cout << endl << "    The answer is " << output << "    " << endl << endl;
    cout << "==================================================================" << endl;
    cout << "              Information and Communication Technology            " << endl;
    cout << "==================================================================" << endl;

    return 0;
}
