#include <iostream>
using namespace std;

int main(){
    int angulo;

    cout<<"Digite o valor do angulo: "<<endl;
    cin>>angulo;

    if (angulo  == 90){
        cout<<"E um triangulo retangulo"<<endl;
    } else if (angulo > 90){
        cout<<"E um triangulo obtusangulo"<<endl;

    } else if (angulo < 90){
        cout<<"E um triangulo acutangulo"<<endl;
    }
}