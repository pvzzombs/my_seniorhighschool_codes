#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int pin;
int correct;
int pswd;
int tries = 3;
int balance = 0;
string owner;

int mainscreen(){
  string choice;
  do{
    system("cls");
    cout << "Welcome again for the ATM " << endl;
    cout << "";
    cin >> choice;
  }while(choice == "ENTER" || choice == "enter" || choice == "Enter");
  return 0;
}
int checkPass(){
  while(tries > 0){
      system("cls");
      cout << "Welcome " << owner <<  endl;
      cout << "Enter Password : ";
      cin >> pswd;
    if(pswd == 5555 && pin == 1111){
        balance = 10000;
        mainscreen();
        break;
    }else if(pswd == 6666 && pin == 2222){
        balance = 20000;
        mainscreen();
        break;
    }else if(pswd == 7777 && pin == 3333){
        balance = 30000;
        mainscreen();
        break;
    }else if(pswd == 8888 && pin == 4444){
        balance = 40000;
        mainscreen();
        break;
    }else{
      cout << "Wrong Password " << owner << ". Please re-type again !!!!" << endl;
      tries --;
      system("pause");
    }
  }

  return 0;
}
int checkPin(int p){
  switch(p){
case 1111 :
    correct = 1;
    owner = "Daisy";
    checkPass();
    break;
case 2222 :
    correct = 1;
    owner = "Angela";
    checkPass();
    break;
case 3333 :
    correct = 1;
    owner = "Maria";
    checkPass();
    break;
case 4444:
    correct = 1;
    owner = "John";
    checkPass();
    break;
default:
    cout << "Error!!!!" << endl;
    system("pause");
  }
  return 0;
}
int main()
{
    do{
      system("cls");
      cout << "=====================================================" << endl;
      cout << "              WELCOME TO MJ ATM MACHINE              " << endl;
      cout << "=====================================================" << endl;

      cout << "Enter the pincode: ";
      cin >> pin;

      checkPin(pin);

    }while(correct != 1);

    return 0;
}
