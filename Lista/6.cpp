#include <iostream>
using namespace std;

int main(){
float raio, altura;
float volume;

cout<<"Digite o raio da lata de oleo> "<<endl;
cin>>raio;
cout<<"Digite a altura da lata de oleo: "<<endl;
cin>>altura;

volume = 3.14159 * (raio * 2) * altura;

cout<<"O volume da lata de oleo e: "<<volume<<endl;

return 0;

}