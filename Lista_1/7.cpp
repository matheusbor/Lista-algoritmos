#include <iostream>
#include <math.h>
using namespace std;

int main(){
int numero1, numero2;
float numero3;
float produto, soma, exponenciacao;

cout<<"Digite um inteiro: "<<endl;
cin>>numero1;

cout<<"Digite outro inteiro: "<<endl;
cin>>numero2;

cout<<"Digite um numero real: "<<endl;
cin>>numero3;

produto = (2 * numero1) * (numero2 / 2);

cout<<"o produto do dobro do primeiro com metade do segundo: "<<produto<<endl;

soma = (3 * numero1) + numero3;

cout<<"a soma do triplo do primeiro com o terceiro: "<<soma<<endl;

exponenciacao = pow(numero3, 3);

cout<<"O terceiro elevado ao cubo: "<<exponenciacao<<endl;


}