#include <iostream>
using namespace std;

int main(){
    int ano;
    cout<<"Digite o ano de nascimento: "<<endl;
    cin>>ano;
    ano = 2023 - ano;

    if (ano >= 16){
        cout<<"Voce pode votar, sua idade e "<<ano<<endl;
    } else{
        cout<<"Voce nao pode votar"<<endl;
    }
}