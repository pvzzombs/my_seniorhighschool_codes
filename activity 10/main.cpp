#include <iostream>
#include <string>

using namespace std;

int main()
{
    //lets make it DYNAMIC
    int number, factorial = 1;

    cout << "==========================================" << endl;
    cout << "       Get the factorial of a number      " << endl;
    cout << "==========================================" << endl;
    cout << "Enter a positive integer: " ;
    cin >> number;
    if(number < 0){
        cout << "Result: ERROR" << endl;
        cout << "=====================================" << endl;
        cout << "Solution: Please type a positive integer!!! " << endl;
        cout << "Please try again!!! " << endl;
    }
    if(number == 1 || number == 0){
        cout << "Result: 1" << endl;
        cout << "=====================================" << endl;
        cout << "Solution: " << endl;
        cout << "The only given solution is the fact that " << number << "! is 1 " << endl;
    }else{
        string solution = "Solution: \nFactorial of ";
        int i = 1;
        string first;
        string second;
        while(number != i){
            factorial = i * (i + 1);
            first = i;
            second = (i+1);
            solution += first;
            solution += " x ";
            solution += second;
            solution += " = ";
            solution += factorial;
            solution += "\n";
            i++;
        }
        cout << "Result: " << factorial << endl;
        cout << "=====================================" << endl;
        cout << solution << endl;
    }
    return 0;
}
