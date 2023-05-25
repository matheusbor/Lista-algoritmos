#include <iostream>
using namespace std;

int main(){
int numero1, numero2, numero3;
int soma, media, produto;

cout<<"Digite um inteiro "<<endl;
cin>>numero1;
cout<<"Digite outro inteiro "<<endl;
cin>>numero2;
cout<<"Digite o terceiro inteiro: "<<endl;
cin>>numero3;

soma = numero1 + numero2 + numero3;
cout<<"A soma e: "<<soma<<endl;

media = soma/3;
cout<<"A media e: "<<media<<endl;

produto = numero1 * numero2 *numero3;
cout<<"O produto e: "<<produto<<endl;

return 0;
}