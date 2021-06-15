#include <iostream>
#include <cstdlib>

using namespace std;

void start(){
    int a = 0;
    char c;

    int arr[5];
    int b = 0;
    int sum = 0;
    cout << "Enter number here: ";
    while(b < 5){
        cin >> arr[b];
        sum = sum + arr[b];
        b++;
    }
    cout << "Sum = " << sum << endl;

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
int main()
{
    start();
    return 0;
}
