#include <iostream>
#include <cmath>
using namespace std;


int main() {

  int num1;
  bool primo = true;
  cout<<"Digite um inteiro positivo: "<<endl;
  cin>>num1;
  for(int i = 2; i <= sqrt(num1); i++){
    if(num1 % i == 0){
      primo = false;
      cout<<"Nao e primo"<<endl;
    }
  }
  if(primo){
    cout<<"Este numero e primo"<<endl;
  }
  
}