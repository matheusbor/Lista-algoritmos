#include <iostream>
using namespace std;

int main (){
    string senha;

    cout<<"Digite a senha: "<<endl;
    getline(cin,senha);

    if (senha == "password"){
        cout<<"Acesso liberado"<<endl;
    }
}