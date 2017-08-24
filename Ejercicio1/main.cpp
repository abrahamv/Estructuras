#include"Materia.h"
#include<stdlib.h>

#define MATERIAS 2

void wait(){
  cin.ignore();
  cin.get();
}
void menu(){
  cout<<"Bienvenidos"<<endl;
  cout<<"1.cargar materias"<<endl;
  cout<<"2.mostrar materias"<<endl;
  cout<<"3.cargar Estudiantes"<<endl;
  cout<<"4.mostrar Lista de estudiantes"<<endl;
  cout<<"0.salir"<<endl;
}
void cargarMaterias(Materia materia[]){
  int i;
  string codigo,nombre;
  
  for(i=0;i<MATERIAS;i++){
    cout<<"Ingrese codigo: ";
    cin>>codigo;
    cout<<endl;
    cout<<"Ingrese nombre Materia:";
    cin.ignore();
    getline(cin,nombre);
    materia[i].cargarMateria(codigo,nombre);
  }
}
void mostrarMateria(Materia materia[]){
  int i;
  system("clear");
  for(i=0;i<MATERIAS;i++){
    materia[i].mostrarMateria();
    cout<<endl;
  }
  wait();
}
void listarMaterias(Materia materia[]){
  int i;
  system("clear");
  for(i=0;i<MATERIAS;i++){
    cout<<i<<")"<<materia[i].getNombre()<<endl;
  }
 
}

void cargarEstudiantes(Materia materia[]){
  int op;
  listarMaterias(materia);
  cout<<"Ingrese numero de materia donde quiere cargar estudiantes:"<<endl;
  cin>>op;
  materia[op].cargarEstudiantes();
}
void mostrarEstudiantes(Materia materia[]){
  int op;
  listarMaterias(materia);
  cout<<"La lista de que materia quiere ver: "<<endl;
  cin>>op;
  system("clear");
  materia[op].mostrarEstudiantes();
  wait();
  
}
int main(){
  Materia materia[MATERIAS];
  int op;
  int i;
  
  do{
    system("clear");
    menu();
    cin>>op;
    switch(op){
    case 1:
      cargarMaterias(materia);
      break;
    case 2:
      mostrarMateria(materia);
      break;
    case 3:
      cargarEstudiantes(materia);
      break;
    case 4:
      mostrarEstudiantes(materia);
      break;
    case 0:
      cout<<"Gracias por usar ASys"<<endl;
      break;
      
    default:
      cout<<"opcion no valida"<<endl;
    }
  }while(op!=0);
  return 0;
}
