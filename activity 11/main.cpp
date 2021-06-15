#include <iostream>
#include <cstdlib>

using namespace std;

char b;

void add(){
     int q;
     int w;
     cout << "addition: " << endl;
     cout << "enter first number: ";
     cin >> q;
     cout << "enter second number: ";
     cin >> w;
     cout << "Answer: " << q + w << endl;
}

void sub(){
     int q;
     int w;
     cout << "subtraction: " << endl;
     cout << "enter first number: ";
     cin >> q;
     cout << "enter second number: ";
     cin >> w;
     cout << "Answer: " << q - w << endl;
}

void mul(){
     int q;
     int w;
     cout << "multiplication: " << endl;
     cout << "enter first number: ";
     cin >> q;
     cout << "enter second number: ";
     cin >> w;
     cout << "Answer: " << q * w << endl;
}

void div(){
     int q;
     int w;
     cout << "division: " << endl;
     cout << "enter first number: ";
     cin >> q;
     cout << "enter second number: ";
     cin >> w;
     cout << "Answer: " << q / w << endl;
}

void start(){

    int a = 0;
    char c;
    char choice;
    cout << "=======================================" << endl;
    cout << "FOUR FUNDAMENTAL MATHEMATICAL OPERATION" << endl;
    cout << "=======================================" << endl;

    cout << "==================================" << endl;
    cout << "Please select an operation: " << endl;
    cout << "[A] Addition " << endl;
    cout << "[B] Subtraction " << endl;
    cout << "[C] Multiplication " << endl;
    cout << "[D] Division " << endl;
    cout << endl;
    cout << "Please select your choice: ";
    cin >> choice;

    if(choice == 'A' || choice == 'a'){
        add();
    }else if(choice == 'B' || choice == 'b'){
        sub();
    }else if(choice == 'C' || choice == 'c'){
        mul();
    }else if(choice == 'D' || choice == 'd'){
        div();
    }else{
        cout << "Not in the choice !!!" << endl;
    }

    while(a != 1){
        cout << "Do you want to continue? [Y/N] ";
        cin >> c;
        if(c == 'y'|| c == 'Y'){
            a = 1;
            system("cls");
            start();
        }else if(c == 'n'|| c == 'N'){
            a = 1;
        }else {
            cout << "Error" << endl;
        }
    }

}

int main(){
    //BY MILES
    start();
    return 0;
}
