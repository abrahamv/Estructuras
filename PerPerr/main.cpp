
#include<iostream>

using namespace std;

class Perrito{
string nombre;
public:

Perrito(){
nombre="";
}
void colocarNombre(string nombre){
this-> nombre=nombre;
}
string getNombre(){
return nombre;
}
};
class Persona{
Perrito perrito;
public:
void asignarPerrito(Perrito firu){
perrito=firu;
}
string comoSellamaTuPerrito(){
return dog.getNombre();
}

};

int main(){
Persona persona1;
Perrito perrito1;
perrito1.colocarNombre("firulais");
persona1.asignarPerrito(perrito1);
cout<<"mi perrito se llama: "<<persona1.comoSellamaTuPerrito()<<endl;
  return 0;
}
