#include<iostream>
using namespace std;

bool compara_digito(int calculo, int ultimo){
    int verificador;
    if(calculo == 0 || calculo == 1){
        verificador = 0;
    } else {
        verificador = 11 - calculo;
    }
    if(verificador == ultimo){
        return true;
    } else{
        return false;
    }
}

bool validar_inscricao(long int inscricao){
int digito, soma = 0, multiplicador = 2, conta_digito = 0, ultimo, calculo;
    while(inscricao > 0){
        digito = inscricao % 10;
        inscricao /= 10;

        if(conta_digito == 0){
            ultimo = digito;
        }

        if(conta_digito >= 1){
            soma += digito * multiplicador;
            multiplicador++;
        }
    conta_digito++;
    }
    calculo = soma % 11;
    
return compara_digito(calculo, ultimo);
}

int main(){
    long int inscricao;
    
    cout<<"Digite sua incricao: "<<endl; //109876547
    cin>>inscricao;
    
    if(validar_inscricao(inscricao)){
        cout<<"Sua inscricao: "<<inscricao<<" e valida"<<endl;
    } else{
        cout<<"Sua inscricao: "<<inscricao<<" e invalida"<<endl;
    }
    
}