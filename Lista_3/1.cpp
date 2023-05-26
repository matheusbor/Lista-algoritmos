#include <iostream>
using namespace std;

int main (){
    int numero1, numero2;

    cout<<"Digite um inteiro: "<<endl;
    cin>>numero1;
    cout<<"Digite um inteiro: "<<endl;
    cin>>numero2;
    if (numero1 > numero2){
        cout<<"O numero maior e: "<<numero1<<endl;
    } else if (numero2 > numero1){
        cout<<"O numero maior e: "<<numero2<<endl;
    } else {
        cout<<"Os numeros sao iguais"<<endl;
    }
}