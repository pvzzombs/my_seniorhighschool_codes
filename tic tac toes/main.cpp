#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

char tic[3][3];
int d, e, f, a, t, i, j, x, y;
void display();
void user();
void newdisp();
void pc();
int check();
int horcheck();
int vercheck();
int diagcheck();
//'.' means empty char
int main(){
  system("cls");
  srand(2);
  d = rand();
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      tic[i][j] = '.';
    }
  }
  display();
  d == 0 ? user() : pc();
  getch();
  return 0;
}

void display(){
  for(t=0; t<3; t++){
    cout << "   " << tic[t][0] << " | " << tic[t][1] << " | " << tic[t][2] << endl;
    if(t!=2){
      cout << "   --|---|--" << endl;
    }
  }
}

void user(){
  cout << "ENTER THE COORDINATES: i.e: 0,1,2 ";
  cin >> x >> y;
  if((x < 0) || (x > 2) && (y < 0) || (y > 2)){
    cout << "ENTER THE CORRECT COORDINATES" << endl;
    user();
  }else{
    if(tic[x][y] == '.'){
      tic[x][y] = 'X';
      newdisp();
    }else{
      cout << "The position is already filled!!" << endl;
      user();
    }
  }
  d = check();
  if(d == 0){
    pc();
  }else{
    cout << "You are the winner!";
    getche();
    exit(1);
  }
}

void newdisp(){
  system("cls");
  for(t=0; t<3; t++){
    cout << "   " << tic[t][0] << " | " << tic[t][1] << " | " << tic[t][2] << endl;
    if(t!=2){
      cout << "   --|---|--" << endl;
    }
  }
}

void pc(){
  int f, z;
  rand();
  cout << "This is the computer's move";
  for(i=0; i<= 20; i++){
    srand(3);
    f = rand();
    srand(3);
    z = rand();
    if(tic[f][z] = '.'){
      tic[f][z] = 'O';
      goto x;
    }else{
      continue;
    }
    x : newdisp();
    d = check();
    if(d == 0){
      user();
    }else{
      cout << "I'm the winner";
      getche();
      exit(1);
    }

  }
}

int check(){
  horcheck();
  vercheck();
  diagcheck();
  return (d || e || f);
}

int horcheck(){
  if(((tic[0][0] == tic[0][1]) && (tic[0][1] == tic[0][2]) && (tic[0][1] != '.')) || ((tic[1][0] == tic[1][1]) && (tic[1][1] == tic[1][2]) && (tic[1][1] != '.')) || ((tic[2][0] == tic[2][1]) && (tic[2][1] == tic[2][2]) && (tic[2][2] != '.'))){
    d = 1;
  }else{
    d = 0;
  }
  return d;
}

int vercheck(){
  if(((tic[0][0] == tic[1][0]) && (tic[1][0] == tic[2][0]) && (tic[0][0] != '.')) || ((tic[0][1] == tic[1][1]) && (tic[1][1] == tic[2][2]) && (tic[0][1] != '.')) || ((tic[0][2] == tic[1][2]) && (tic[1][2] == tic[2][2]) && (tic[0][2] != '.'))){
    e = 1;
  }else{
    e = 0;
  }
  return e;
}

int diagcheck(){
  if(((tic[0][0] == tic[1][1]) && (tic[1][1] == tic[2][2]) && (tic[0][0] != '.')) || ((tic[0][2] == tic[1][1]) && (tic[1][1] == tic[2][0]) && (tic[1][1] != '.'))){
    f = 1;
  }else{
    f = 0;
  }
  return f;
}
