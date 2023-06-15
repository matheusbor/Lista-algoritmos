#include <iostream>
using namespace std;

int main(){
  bool opcao;
  int num1, maior, menor;
  do{
    cout<<"Digite um numero: "<<endl;
    cin>>num1;
    
    if(num1 > maior){
      maior = num1;
    } else if(num1 < menor){
      menor = num1;
    }
    cout<<"Deseja continuar digitando? 1 - SIM / 0 - NAO"<<endl;
    
  }while(opcao == 1);
    
  
  
}