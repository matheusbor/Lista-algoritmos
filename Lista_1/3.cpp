#include <iostream>
using namespace std;

int main(){
float renumeracao, horas;
float salario, ir, inss, sindicato;

cout<<"Digite quanto ganha por hora: "<<endl;
cin>>renumeracao;
cout<<"Digite quantas horas trabalha no mes: "<<endl;
cin>>horas;

salario = renumeracao * horas;

cout<<"Seu salario bruto e: "<<salario<<endl;

ir = (salario/100) * 11;

cout<<"Seu imposto de renda e: "<<ir<<" (Nao entendi se era pra por ou nao)"<<endl;

inss = (salario/100) * 8;

cout<<"Voce pagou ao inss: "<<inss<<endl;

sindicato = (salario/100) * 5;

cout<<"Voce pagou ao sindicato: "<<sindicato<<endl;

salario = salario - ir - inss - sindicato;

cout<<"Seu salario liquido e: "<<salario<<endl;


return 0;
}