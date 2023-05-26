#include <iostream>
using namespace std;

int main(){
    char turno;
    cout<<"Digite o turno em que voce estuda: \nM para matutino, V para vespertino, N para noturno: "<<endl;
    cin>>turno;

    if (turno == 'M'){
        cout<<"Bom dia!"<<endl;
    } else if (turno == 'V'){
        cout<<"Boa tarde!"<<endl;
    } else if (turno == 'N'){
        cout<<"Boa noite"<<endl;
    } else {
        cout<<"Valor inválido"<<endl;
    }
}