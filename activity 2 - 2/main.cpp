#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int p1num = 0;
int p1money = 100;
int p1bet = 0;
int p1try = 2;
int numWin = 0;


int getBet(){
  return 0;
}
int gen(){
  srand(time(NULL) % 37);
  numWin = rand() % 10;
  cout << "The winning number is : " << numWin << endl;
  return 0;
}
int checkWin(){
  if(p1money <= 0 || p1try < 0){
    p1money = 100;
    p1try = 2;
  }
  p1try--;
  if(numWin == p1num){
    p1money = p1money + p1bet;
    cout << "You won " << p1bet << ", you have " << p1money << endl;
  }else{
    p1money = p1money - p1bet;
    cout << "You lost " << p1bet << ", you have " << p1money << endl;
  }
  return 0;
}
int bankrupt(){
  char choice;
  if(p1try < 0){
    cout << "You ran out of tries" << endl;
  }else if(p1money <= 0){
    cout << "You are now bankrupt !" << endl;
    cout << "You don't have enough money to continue the game! " << endl;
  }

  return 0;
}
int main(){
  //this is the main function
  //let add a do while loop
  char again;
  do{
    system("cls");
	cout << "---------------------------------------------------------------" << endl;
	cout << "                      Mini-roulette Game                       " << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "Player 1, What is your number : ";
	cin >> p1num;
	cout << "Player 1, How much will you bet : ";
	cin >> p1bet;
	cout << "---------------------------------------------------------------" << endl;
	//generate the number
	gen();
	//check if the player win
	checkWin();
	//check for bankrupt
	bankrupt();


	cout << "Bet Again? (Press 1 for NO/ 2 for YES)";
	cin >> again;

  }while(again == '2');
  return 0;
}
