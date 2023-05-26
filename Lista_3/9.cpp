#include <iostream>
using namespace std;

int main (){
    string nome1, nome2;
    int idade1, idade2;

    cout<<"Digite o nome da primeira pessoa: "<<endl;
    getline(cin, nome1);
    cout<<"Digite a idade da primeira pessoa: "<<endl;
    cin>>idade1;

    cin.ignore();//para limpar a nova liha pendente no fluxo de entrada

    cout<<"Digite o nome da segunda pessoa: "<<endl;
    getline(cin, nome2);

    cout<<"Digite a idade da segunda pessoa: "<<endl;
    cin>>idade2;

    if (idade1 > idade2){
        cout<<"A pessoa mais velha e: "<<nome1<<endl;
    } else if (idade2 > idade1){
        cout<<"A pessoa mais velha e: "<<nome2<<endl;
    } else {
        cout<<"As pessoas tem a mesma idade"<<endl;
    }
}