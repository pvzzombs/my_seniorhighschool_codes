#include <iostream>
#include <cstdlib>
#include <new>
#include <string>
#include <fstream>

using namespace std;

int memory[5000];
int pnt = 0;
int cnt = 0;
int c;
string temp;
int open = 0;
int close = 0;
int prg;
unsigned int Max;
ifstream inFile;
string fileName;
string program;
string str;
ofstream transpiled;
string transpiledName;

void collectInput(){
    cout << "\n$ Input : ";
    getline(cin,temp);
    if(temp[0] == '\n' || (temp[0] == '\r' && temp[1] == '\n')){
        transpiled << "mem[pnt] = 0;\n";
        memory[pnt] = 0;
    }else{
        transpiled << "mem[pnt] = " << int(temp[0]) << ";\n";
        memory[pnt] = int(temp[0]);
    }
}

void leftBracket(){
    if(memory[pnt] == 0){
    open = 0;
    cnt++;
        while(cnt < prg){
            if(program[cnt] == ']' && open == 0){
                break;
            }else if(program[cnt] == '['){
                open++;
            }else if(program[cnt] == ']'){
                open--;
            }
            cnt++;
        }
    }
}

void rightBracket(){
    if(memory[pnt] > 0){
        close = 0;
        cnt--;
        while(cnt >= 0){
            if(program[cnt] == '[' && close == 0){
                break;
            }else if(program[cnt] == ']'){
                close++;
            }else if(program[cnt] == '['){
                close--;
            }
            cnt--;
        }
    }
}
void compile(){
    transpiled << "#include <iostream>\n";
    transpiled << "using namespace std;\n";
    transpiled << "int main(){\n";
    transpiled << "int mem[5000];\n";
    transpiled << "int pnt = 0;\n";
    while(cnt < prg){
        if(Max > 4000000){
            cout << "Error : Maximum iteration exceeded!!!" << endl;
            transpiled.close();
            break;
        }
        if(program[cnt] == '>'){
            ++pnt;
            transpiled << "++pnt;\n";
            if(pnt == 100){
                cout << "Error : Off Tape !" << endl;
                transpiled.close();
                break;
            }
        }else if(program[cnt] == '<'){
            --pnt;
            transpiled << "--pnt;\n";
            if(pnt < 0){
                cout << "Error : Off Tape !" << endl;
                transpiled.close();
                break;
            }
        }else if(program[cnt] == '+'){
            ++memory[pnt];
            transpiled <<  "++mem[pnt];\n";
            if(memory[pnt] > 255){
                transpiled << "mem[pnt] = 0;\n";
                memory[pnt] = 0;
            }
        }else if(program[cnt] == '-'){
            --memory[pnt];
            transpiled << "--mem[pnt];\n";
            if(memory[pnt] < 0){
                transpiled << "mem[pnt] = 255;\n";
                memory[pnt] = 255;
            }
        }else if(program[cnt] == '.'){
            cout << char(memory[pnt]);
            transpiled << "cout << char(mem[pnt]);\n";
        }else if(program[cnt] == ','){
            collectInput();
        }else if(program[cnt] == '['){
            leftBracket();
        }else if(program[cnt] == ']'){
            rightBracket();
        }
        Max++;
        cnt++;
    }
    transpiled << "cout << endl;\n";
    transpiled << "system(\"pause\");\n";
    transpiled << "return 0;\n";
    transpiled << "}\n";
    transpiled.close();
}

int main()
{
    system("color 0b");
    cout << "$ Enter File Path: ";
    getline(cin, fileName);
    inFile.open(fileName);
    if(!inFile){
        cout << "Error : Cannot Open File !" << endl;
        system("pause");
        return 0;
    }
    while(getline(inFile, str)){
        program += str;
    }
    inFile.close();
    cout << "$ Enter Transformed Path: ";
    getline(cin, transpiledName);
    transpiled.open(transpiledName);
    if(!transpiled){
        cout << "Error: Cannot Open File !" << endl;
        system("pause");
        return 0;
    }
    prg = program.length();

    compile();

    system("pause");
    return 0;
}
