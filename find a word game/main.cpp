#include <iostream>
#include <conio.h>
//#include <cstdio>
//#include <cstdlib>
#include <windows.h>
using namespace std;

string RED = "color 0c";
string WHITE = "color 0f";
string BLINK = "cls";
string YELLOW = "color 0e";

char arr[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ    "};
int pos1[20];
int pos2[20];

void gotoxy(short x, short y) {
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h, c);
}

//void textattr(int a){
//
//}

void textcolor(string color, string blink) {
  if(blink == "cls"){
    system(BLINK.c_str());
  }
  system(color.c_str());
}

void clrscr(){
  system("cls");
}

int main() {
  int i,no,j;
  //textattr(1<<4|14);

  clrscr();
  printf("Assume A Word!\n\n\rStep 1:\n\r=======\n\rTable 1:\n\n\r");

  //textattr(1<<4|12);
  for(i=0;i<5;i++)
    printf("%d ",i+1);

  //textattr(7<<4);
  for(i=0; i<30; i++){
    if(i%5==0)
    printf("\n");
    printf("%c ",arr[i]);
  }

  //textattr(1<<4|14);
  gotoxy(1,15);
  printf("\n\n\rEnter Total Number of letters in word:");
  scanf("%d",&no);
  for(i=0; i<no; i++) {
    gotoxy(1,15);
    printf("\n\n\r                                                                             ");

    gotoxy(1,15);
    printf("\n\n\rEnter Letter %d Coloumn number:",i+1);
    scanf("%d",&pos1[i]);
    pos1[i]-=1;
  }

  printf("Step 2:\n\rTable 2:\n\r");
  //textattr(1<<4|12);
  for(i=0;i<6;i++)
    printf("%d ",i+1);

  //textattr(7<<4);
  for(i=0; i<no; i++) {
    printf("\n");
    for(j=pos1[i];j<30;j+=5)
      printf("%c ",arr[j]);
  }

  //textattr(1<<4|14);
  for(i=0; i<no; i++) {
    gotoxy(1,15);
    printf("\n\n\r                                                                             ");

    gotoxy(1,15);
    printf("\n\n\rEnter the  %d Letter's Coloumn number:",i+1);
    scanf("%d",&pos2[i]);
    pos2[i]-=1;
  }
  clrscr();

  gotoxy(30,13);
  printf("We Got U! ");
  getch();

  gotoxy(30,15);
  printf("SURPRISED!");
  getch();

  textcolor(WHITE, BLINK);
  gotoxy(30,14);
  for(i=0;i<no;i++) {
    printf("%c",arr[pos2[i]*5+pos1[i]]);
  }
  getch();

  textcolor(YELLOW, BLINK);
  printf("\n\n\n\n\n\n\n\n\rPress Esc To Exit...");
  while(getch()!=27);

  return 0;
}

