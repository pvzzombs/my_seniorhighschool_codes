#include <iostream>

using namespace std;

int main()
{
    int num;
    int factorial = 1;
    cout << "-----------------------------------------------" << endl;
    cout << "ENTER A  POSITIVE INTEGER AND GET THE FACTORIAL" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Enter positive integer : ";
    cin >> num;
    int total = num;
    if(num < 0){
        cout << "Error: Only Positive Integers Are Accepted !!!!!!!" << endl;
    }else{
        while(num > 0){
            factorial = factorial * num;
            --num;
        }
        cout << "The factorial of " << total << " is " << factorial << endl;
    }
    cout << "-----------------------------------------------" << endl;
    cout << "           I DEBUG I AM A PROGRAMMER           " << endl;
    cout << "-----------------------------------------------" << endl;

    //system("pause");
    return 0;


}
