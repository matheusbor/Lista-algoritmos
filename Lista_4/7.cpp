#include <iostream>
using namespace std;

 int main(){
int maior, menor, numero;
 
 cout << "\nExercício 7\n";
    cout << "Digite uma sequência de números inteiros positivos terminada por zero:\n";
    cin >> numero;
    
    maior = menor = numero;
    while (numero != 0) {
        if (numero > maior){
            maior = numero;
    }
        if (numero < menor){
            menor = numero;
        cin >> numero;
 }
    }
    }