#include <iostream>
#include <cstdlib>

using namespace std;

void start(){
    int close = 0;
    char key;

    int min;
    int max;
    int arr[5];
    cout << "Enter a number(5) : ";
    int a = 0;
    while(a < 5){
        cin >> arr[a];
        if(a == 0){
            min = arr[a];
            max = arr[a];
        }

        if(arr[a] < min){
            min = arr[a];
        }else if(arr[a] > max){
            max = arr[a];
        }else{
            //ddo nothing
        }

        a++;
    }

    if(min == max){
        cout << "All numbers are equal! " << endl;
    }else{
        cout << "The smallest number is : " << min << endl;
        cout << "The largest number is : " << max << endl;
    }

    //insert while here below
    while(close != 1){
        cout << "Do you want to continue? [Y/N] ";
        cin >> key;
        if(key == 'y'|| key == 'Y'){
            close = 1;
            system("cls");
            start();
        }else if(key == 'n'|| key == 'N'){
            close = 1;
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
