#include <iostream>
using namespace std;

int main(){

  long long int cpf;
  int digito, contadora_digitos = 0, ultimo1, ultimo2;
  int cont_digito1 = 2, cont_digito2 = 3, soma1 = 0, soma2 = 0;
  cout<<"Digite o cpf: "<<endl;
  cin>>cpf;
  cout<<"Seu cpf e:"<<cpf<<endl;
  long long int auxiliar = cpf;

  
  while(auxiliar > 0){
    digito = auxiliar % 10;
    cout<<"digito: "<<digito<<endl;
    auxiliar /= 10;
    if(contadora_digitos == 0){
      ultimo2 = digito;
    } else if(contadora_digitos == 1){
      ultimo1 = digito;
    }
    if(contadora_digitos >=2){
      soma1 += digito * cont_digito1;
      cout<<"A soma da 1 multiplicacao e: "<<soma1<<endl;
      cont_digito1++;
    }
    if(contadora_digitos >=2){
      soma2 += digito * cont_digito2;
      cout<<"A soma da 2 multiplicacao e: "<<soma2<<endl;
      cont_digito2++;
    }
    contadora_digitos ++;
  }
  int comparacao1, comparacao2;

  comparacao1 = (10 * soma1) % 11;
  comparacao2 = ((soma2 + (comparacao1 * 2)) * 10) % 11;

  if (comparacao1 == ultimo1 && comparacao2 == ultimo2){
    cout<<"Seu cpf e valido mlk"<<endl;
  }
  }
  
