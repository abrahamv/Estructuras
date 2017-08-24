

#include"Estudiante.h"
#define ESTUDIANTES 5

class Materia{
  string codigo;
  string nombre;
  Estudiante estudiantes[ESTUDIANTES];
 public:
  void mostrarMateria();
  void cargarMateria(string codigo,string nombre);
  void cargarEstudiantes();
  string getNombre();
  void mostrarEstudiantes();
};

void Materia::mostrarMateria(){
  cout<<"Codigo:"<<codigo<<endl;
  cout<<"Materia:"<<nombre<<endl;
}
void Materia::cargarMateria(string codigo,string nombre){
  this->codigo=codigo;
  this->nombre=nombre;
}
void Materia::mostrarEstudiantes(){
  int i;
  
  for(i=0;i<ESTUDIANTES;i++){
    cout<<i+1<<")"<<estudiantes[i].getNombre()<<endl;
  }
}
void Materia::cargarEstudiantes(){
  int i;
  string nombreEs;
  int edadEs;
  for(i=0;i<ESTUDIANTES;i++){
    cout<<"Ingrese nombre["<<i+1<<"]"<<endl;
    cin>>nombreEs;
    cout<<"Ingrese edad:"<<endl;
    cin>>edadEs;
    estudiantes[i].cargarDatos(nombreEs,edadEs);
  }
}
string Materia::getNombre(){
  return nombre;
}
