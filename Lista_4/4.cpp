#include <iostream>
using namespace std;

int main() {
  int num1, soma;
  cout<<"DIgite um inteiro: "<<endl;
  cin>>num1;

  for(int i = 1; i<num1; i++){
    if(num1 % i == 0){
      cout<<i<<" e divisor de "<<num1<<endl;
    } 
    
  }
  

  
}