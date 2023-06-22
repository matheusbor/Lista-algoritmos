#include <iostream>
using namespace std;

int main() {
  int num1, soma = 0;
  cout<<"DIgite um inteiro: "<<endl;
  cin>>num1;

  for(int i = 1; i<num1; i++){
    if(num1 % i == 0){
      soma += i;
    } 
    
  }
  if (soma == num1){
    cout<<"E um numero perfeito"<<endl;
  } else {
    cout<<"Nao e um numero perfeito "<<endl;
  }

  
}