#include <iostream>
using namespace std;

int main (){
    int codigo;
    bool opcao;
    opcao = 1;
    while (opcao == 1){
    
    cout<<"Digite o codigo do produto: "<<endl;
    cin>>codigo;

    switch(codigo){
        case 1:
            cout<<"Alimento nao perecivel"<<endl;
            break;
        case 2:
        case 3:
        case 4:
             cout<<"Alimento perecivel"<<endl;
             break;
        case 5:
        case 6:
            cout<<"Vestuario"<<endl;
            break;
        case 7:
            cout<<"Higiene pessoal"<<endl;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            cout<<"Limpeza e Utensilios Domesticos"<<endl;
            break;
        default:
            cout<<"Produto nao classificado, codigo invalido"<<endl;
    
    }    
    cout<<"Deseja continuar? 1 para sim e 0 para nao: "<<endl;
    cin>>opcao;
    }
}