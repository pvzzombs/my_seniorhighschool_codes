#include <iostream>
#include <cstdlib>

using namespace std;
//susi para gumana ang pAG TYPE
char key;
void BUMILINASIYA(char choice){
    double bayad;
    int a;
    switch(choice){
    case 'a' : case 'A' :
        cout << "Ang pinili mo ay tapsilog." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 55){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 55) << endl;
        }
        break;
    case 'b' : case 'B' :
        cout << "Ang pinili mo ay longsilog." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 44){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 44) << endl;
        }
        break;
    case 'c' : case 'C' :
        cout << "Ang pinili mo ay chicksilog." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 45){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 45) << endl;
        }
        break;
    case 'd' : case 'D' :
        cout << "Ang pinili mo ay porksilog." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 46){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 46) << endl;
        }
        break;
    case 'e' : case 'E' :
        cout << "Ang pinili mo ay beefsilog." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 48){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 48) << endl;
        }
        break;
    case 'f' : case 'F' :
        cout << "Ang pinili mo ay hotsilog." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 43){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 43) << endl;
        }
        break;
    case 'g' : case 'G' :
        cout << "Ang pinili mo ay coffee w/ milk." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 15){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 15) << endl;
        }
        break;
    case 'h' : case 'H' :
        cout << "Ang pinili mo ay black coffee." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 12){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 12) << endl;
        }
        break;
    case 'i' : case 'I' :
        cout << "Ang pinili mo ay ice tea." << endl;
        cout << "I-type ang bayad: ";
        cin >> bayad;
        if(bayad < 20){
            cout << "Kulang ang bayad mo! " << endl;
        }else{
            cout << "Maraming Salamat Suki! " << endl;
            cout << "Sukli: " << (bayad - 20) << endl;
        }
        break;
    //case 'b' : case 'B' :
       // cout
    }
}
void start(){
    int simula = 0;
    char yungPiniliNgCustomerMo;
    //simulan ang menu
    cout << "=========================================" << endl;
    cout << "      ----->MJ's Chibugan Kubo<-----     " << endl;
    cout << "            Busog sarap menu             " << endl;
    cout << endl;
    cout << "=========================================" << endl;
    cout << "[A] TAPSILOG                      P 55.00" << endl;
    cout << "[B] LONGSILOG                     P 44.00" << endl;
    cout << "[C] CHICKSILOG                    P 45.00" << endl;
    cout << "[D] PORKSILOG                     P 46.00" << endl;
    cout << "[E] BEEFSILOG                     P 48.00" << endl;
    cout << "[F] HOTSILOG                      P 43.00" << endl;
    cout << "[G] COFFEE W/ MILK                P 15.00" << endl;
    cout << "[H] BLACK COFFEE                  P 12.00" << endl;
    cout << "[I] ICE TEA                       P 20.00" << endl;
    cout << "[J] UMALIS NA (EXIT)                     " << endl;

    cout << endl << "Suki ano ang order mo? ";
    cin >> yungPiniliNgCustomerMo;
    BUMILINASIYA(yungPiniliNgCustomerMo);

    while(simula == 0){
        cout << "Gusto mo pa ba umorder? [Y/N]: ";
        //sipsipin ang letra para gumana
        cin >> key;
        if(key == 'y' || key == 'Y'){
            simula = 1;
            system("cls");
            start();
        }else if(key == 'n' || key == 'N'){
            system("cls");
            cout << endl << endl;
            cout << "Paalam! Balik po kayo!!! \n" << endl;
            cout << "^-^ ----- SIR BRYAN POGI ----- ^-^" << endl;
            simula = 1;
        }else{
            cout << "Walang hiya ka, lumayas KA NA !!!! \n";
        }
    }
}
int main()
{
    start();
    return 0;
}
