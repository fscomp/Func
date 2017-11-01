#include <iostream>
using std::cin;
using std::cout;
using namespace std;
int calculaCubo (int x)
{
return x*x*x;
}
int main ()
{
int calculaCubo(int n);
int n;
cout<< "Digite um número inteiro: ";
cin>>n;
cout<< "O cubo de " <<n<< " é: "<<calculaCubo(n);
return 0;
system ("PAUSE");
}
