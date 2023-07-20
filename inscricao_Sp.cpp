#include <iostream>
using namespace std;

int main(){
    long long int cpf;
    int digito, soma1 = 0, soma2 = 0, conta_digito = 0, multiplicacao1 = 2, multiplicacao2 = 2, ultimo1 , ultimo2;

    cout<<"Digite seu cpf: "<<endl;
    cin>>cpf;

    while (cpf > 0){
        digito = cpf % 10;
        cpf /= 10;

        if(conta_digito == 0){
            ultimo2 = digito;

        } else if ( conta_digito == 3){
            ultimo1 = digito;
        }

        if(conta_digito > 0 && conta_digito !=3){
            soma1 += digito * multiplicacao1;
            multiplicacao1 ++;
            soma2 += digito * multiplicacao2;
            multiplicacao2++;
        }
        if (conta_digito == 9){
            multiplicacao2 = 2;
        }
    conta_digito++;
    }
    int comparacao1, comparacao2;

    comparacao1 = (soma1 * 10)% 11;
    comparacao2 = ((soma2 + (comparacao1 * 2))*10)%11;

    if (comparacao1 == ultimo1 && comparacao2 == ultimo2){
        cout<<"Seu cpf e valido";
    }
}