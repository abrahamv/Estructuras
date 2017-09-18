#include<iostream>
using namespace std;

class Fecha{
  int anio;
  int mes;
  int dia;

public:
  void cargarFecha(int a,int m, int d){
    anio=a;
    mes=m;
    dia=d;
  }
  void mostrarFecha(){
    
    cout<<anio<<"/"<<mes<<"/"<<dia<<endl;
    
  }
};

class Trabajador{
  string nombre;
  int edad;
  Fecha fechaNacimiento;
  int ci;
public:
  Trabajador(string nombre,int edad,int ci){
    this->nombre=nombre;
    this->edad=edad;
    this->ci=ci;
  }
  void ingresarFechaNacimiento(int a,int m, int d){
  fechaNacimiento.cargarFecha(a,m,d);
  }
  void mostrarDatos(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"CI: "<<ci<<endl;
    cout<<"Fecha nacimiento"<<endl;
    fechaNacimiento.mostrarFecha();
  }
};

int main(){
  Trabajador trabajador1("joel llanos",35,4556655);
  trabajador1.ingresarFechaNacimiento(1990,3,25);
  trabajador1.mostrarDatos();
  return 0;
}
