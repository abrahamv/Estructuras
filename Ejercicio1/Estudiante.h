
#include<iostream>

using namespace std;

class Estudiante{
  string name;
  int edad;

 public:
  void cargarDatos(string name,int edad){
    this->name=name;
    this->edad=edad;
  }
  void mostrarDatos(){
    cout<<"nombre:"<<name<<endl;
    cout<<"edad:"<<edad<<endl;
  }
  string getNombre(){
    return name;
  }

};
