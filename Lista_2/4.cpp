#include <iostream>
using namespace std;

int main(){
    int numero1, numero2, numero3;
    cout<<"Digite um inteiro: "<<endl;
    cin>>numero1;
    cout<<"Digite um inteiro: "<<endl;
    cin>>numero2;
    cout<<"Digite um inteiro: "<<endl;
    cin>>numero3;

    if (numero1 > numero2 && numero1 > numero3){
        cout<<"O maior numero e: "<<numero1<<endl;
    } else if (numero2 > numero1 && numero2 > numero3){
        cout<<"O maior numero e: "<<numero2<<endl;
    } else if (numero3 > numero1 && numero3 > numero2){
        cout<<"O maior numero e: "<<numero3<<endl;
    }
}