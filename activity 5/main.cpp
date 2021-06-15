#include <iostream>

using namespace std;

int main()
{
    int date;
    cout << "This program will help you to identify if the date is valid or invalid." << endl;
    cout << "=======================================================================" << endl;
    cout << "Enter the date: ";
    cin >> date;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
    if(date < 1 || date > 31){
        cout << "The date you entered is INVALID!!!" << endl;
    }else{
        if(date == 1){
            cout << "Yes, 1 is New Year's Day" << endl;
        }else if(date == 14){
            cout << "Yes, 14 is Valentines Day" << endl;
        }else if(date == 21){
            cout << "Yes, 21 is Ninoy Aquino Day" << endl;
        }else if(date == 27){
            cout << "Yes, 27 is National Heroes Day" << endl;
        }else if(date == 25){
            cout << "Yes, 25 is Christmas Day" << endl;
        }else if(date == 30){
            cout << "Yes, 30 is Bonifacio and Rizal Day" << endl;
        }else{
            cout << "The date you enterd is VALID!!!" << endl;
        }
    }
    cout << endl << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
    cout << "                   Teacher: Sir Brian Pogi                             " << endl;
    cout << "                              By Miles                                 " << endl;
    return 0;
}
