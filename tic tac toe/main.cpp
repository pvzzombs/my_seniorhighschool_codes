#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int board[9];
int player = 0;
int counter = 0;

void reset();
void display();
void play();
void pc();
void check();


int main()
{
    display();
    play();
    return 0;
}

void reset(){
  for(int i=0; i<9; i++){
    board[i] = 0;
  }
  player = 0;
  display();
  counter = 0;
}

void display(){
  //string tile = "";
  system("cls");
  cout << "current player: " << (player == 0?"X":"O") << endl;
  cout << "           ---------------" << endl;
  cout << "           ";
  for(int i=0; i<9; i++){
    //1 is x, 2 is o
    if(board[i] == 1){
      cout << "| X |";
    }else if(board[i] == 2){
      cout << "| O |";
    }else{
      cout << "| " << i+1 << " |";
    }

    if((i+1) % 3 == 0){
      cout << endl << "           ---------------" << endl;
      cout << "           ";
    }
  }
}

void play(){
  int tile;
  cout << endl;
  cout << "Please enter a tile number from 1 to 9: ";
  cin >> tile;
  --tile;
  if(tile < 0 || tile > 8 || board[tile] == 1 || board[tile] == 2){
    cout << "Enter a valid tile number! " << endl;
    play();
  }
  board[tile] = 1;
  player = 1;
  display();
  check();
  pc();
}

void pc(){
  Sleep(300);
  string load = "";
  for(int i=0; i<30; i++){
    load += "=";
    display();
    cout << "Thinking" << "[" << load;
    for(int j=0; j<30-i; j++){
      cout << " ";
    }
    cout << "]" << endl;
    if(i < 9){
      cout << "Please wait...";
    }else if(i >= 9 && i < 19){
      cout << "Loading neurons to my brain. HAHAHA!!! ";
    }else if(i >= 19 && i < 27){
      cout << "Finished Loading. Preparing For Answer! ";
    }else if(i >= 27){
      cout << "Initiating attack...";
    }
    //if((i+1) % 3 == 0){
    //  load = "";
    //}
    Sleep(300);
  }
  int random = rand() % 10;
  while(board[random] != 0){
    random = rand() % 10;
  }
  board[random] = 2;
  player = 0;
  display();
  check();
  play();
}

void check(){
  ++counter;
  //0 1 2
  //3 4 5
  //6 7 8

  //check player x
  if((board[0] == 1 && board[1] == 1 && board[2] == 1) || (board[3] == 1 && board[4] == 1 && board[5] == 1) || (board[6] == 1 && board[7] == 1 && board[8] == 1)){
    cout << endl << "player X wins!" << endl;
    system("pause");
    exit(0);
  }else if((board[0] == 1 && board[3] == 1 && board[6] == 1) || (board[1] == 1 && board[4] == 1 && board[7] == 1) || (board[2] == 1 && board[5] == 1 && board[8] == 1)){
    cout << endl << "player X wins!" << endl;
    system("pause");
    exit(0);
  }else if((board[0] == 1 && board[4] == 1 && board[8] == 1) || (board[2] == 1 && board[4] == 1 && board[6] == 1)){
    cout << endl << "player X wins!" << endl;
    system("pause");
    exit(0);
  }

  //check player o
  if((board[0] == 2 && board[1] == 2 && board[2] == 2) || (board[3] == 2 && board[4] == 2 && board[5] == 2) || (board[6] == 2 && board[7] == 2 && board[8] == 2)){
    cout << endl << "player O wins!" << endl;
    system("pause");
    exit(0);
  }else if((board[0] == 2 && board[3] == 2 && board[6] == 2) || (board[1] == 2 && board[4] == 2 && board[7] == 2) || (board[2] == 2 && board[5] == 2 && board[8] == 2)){
    cout << endl << "player O wins!" << endl;
    system("pause");
    exit(0);
  }else if((board[0] == 2 && board[4] == 2 && board[8] == 2) || (board[2] == 2 && board[4] == 2 && board[6] == 2)){
    cout << endl << "player O wins!" << endl;
    system("pause");
    exit(0);
  }

  //check for draw
  if(counter == 9){
    cout << endl << "DRAW" << endl;
    system("pause");
    exit(0);
  }
}
