#include <iostream>

using namespace std;

int main()
{
    int number;
    int loop;
    int counter = 0;

    //system("color 2a");
    cout << "---------------------------------------------------------" << endl;
    cout << "WELCOME TO SRCS INFORMATION AND COMMUNICATION  TECHNOLOGY" << endl;
    cout << "---------------------------------------------------------" << endl;

    cout << "ENTER A NUMBER: " ;
    cin >> number;
    cout << "ENTER HOW MANY LOOPS: ";
    cin >> loop;

    while (counter < loop){
        cout << "SRCS ICT I DEBUG : " << number << endl;
        ++number;
        ++counter;
    }

    cout << "-----------------------------------------------" << endl;
    cout << "           I DEBUG I AM A PROGRAMMER           " << endl;
    cout << "-----------------------------------------------" << endl;
    return 0;
}
