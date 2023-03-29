#include <iostream>
using namespace std;

int main(){
float a,b,c,d,e,f, x, y;

cout<<"Digite os valores separados por espaço: "<<endl;
cin>>a>>b>>c>>d>>e>>f;

x = (c * e - b * f)/(a * e - b * d);

y = ( a * f -  c * d)/(a * e - b * d);

cout<<"O valor de x e: "<<x<<endl;
cout<<"O valor de y e: "<<y<<endl;

return 0;
}