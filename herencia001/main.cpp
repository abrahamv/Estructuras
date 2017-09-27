#include<iostream>
#include<cstdlib>
using namespace std;

class Padre{
  string nombre;
  string apellido;
  int edad;
  string direccion;
  
public:
  void cargarDatos(string nombre,string apellido,int edad,string direccion){
    this->nombre=nombre;
    this->apellido=apellido;
    this->edad=edad;
    this->direccion=direccion;
  }
  void mostrarDatos(){
    //system("clear");
    
    cout<<nombre<<endl;
    cout<<apellido<<endl;
    cout<<edad<<" anios"<<endl;
    cout<<direccion<<endl;
  }
};

class Hijo:public Padre{
  public:
  void jugarFutbol(){
    cout<<"Juega futbol"<<endl;
  }
  
};
class Nieto:public Hijo{
  public:
  void sabeProgramar(){
    cout<<"sabe programar"<<endl;
  }
};

int main(){
  system("clear");
  cout<<"PADRE"<<endl;
  Padre papa;
  papa.cargarDatos("Juan","Perez",40,"av. simon I. patinio");
  papa.mostrarDatos();
  cout<<"==============================="<<endl;
  cout<<"HIJO"<<endl;
  Hijo hijo;
  hijo.cargarDatos("gustavo","Perez",20,"av. simon I. patinio");
  hijo.mostrarDatos();
  hijo.jugarFutbol();
  cout<<"==============================="<<endl;
  cout<<"NIETO"<<endl;
  Nieto nieto;
  nieto.cargarDatos("Jose","Perez",5,"av. simon I. patinio");
  nieto.mostrarDatos();
  nieto.jugarFutbol();
  nieto.sabeProgramar();
  cout<<"================================"<<endl;
  return 0;
}
