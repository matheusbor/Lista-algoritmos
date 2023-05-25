#include <iostream>
#include <math.h>
using namespace std;

int main(){
int A, B, C;
int R, S;
float D;

cout<<"Digite os valores de A B C separados por espaco: "<<endl;
cin>>A>>B>>C;

R = (A + B);
R = pow(R, 2);

S = (B + C);
S = pow(S, 2);

D = (R + S) / 2.;
cout<<"O resultado e: "<<D<<endl;


return 0;
}