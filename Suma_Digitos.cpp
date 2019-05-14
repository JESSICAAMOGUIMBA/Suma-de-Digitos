#include <iostream>
using namespace std;
int  sumar(int numero){
  if(numero<10){
    
    return numero;
  }
  return sumar(numero/10)+(numero%10);

 }

int main() {
  cout<<"\tEJERCICIO 4\n\n";
  int numero;
  cout<<"Ingre un numero entero:   ";
  cin>> numero;
  cout<<endl;
if (numero<0) {
cout<<"El numero no es entero positivo.";
 }else{
   
  cout<<"La suma de digitos es:  ";
  cout<<sumar(numero);
  }

