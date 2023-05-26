#include <iostream>
using namespace std;

int main(){
    int lados;
    float altura, base, area;

    cout<<"Digite o numero de lados do poligono regular: "<<endl;
    cin>>lados;

    if(lados == 3){
        cout<<"E um triangulo"<<endl;
        cout<<"Digite a medida da base: "<<endl;
        cin>>base;
        cout<<"Digite a medida da altura: "<<endl;
        cin>>altura;
        area = (base * altura)/2;
        cout<<"O valor da area e: "<<area<<endl;
    } else if(lados == 4){
        cout<<"E um quadrado"<<endl;
        cout<<"Digite a medida da base: "<<endl;
        cin>>base;
        area = base * base;
        cout<<"O valor da area e: "<<area<<endl;
    } else if(lados == 5) {
        cout<<"E um pentagono";
    } else if( lados < 3){
        cout<<"Não e um poligono"<<endl;
    } else if (lados > 5){
        cout<<"Poligono nao identificado"<<endl;
    }
}