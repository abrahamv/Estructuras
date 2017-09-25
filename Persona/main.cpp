#include<iostream>
using namespace std;

class Persona
{
private:
  string nombre;

public:
  void registrar_datos()
  {
    cout<< "Ingrese nombre"<<endl;
    cin>>nombre;
  }
  void mostrar_datos()
  {
    cout<<nombre<<endl;

  }
};
 


  
int main()
{
  int i;
  Persona persona[3];
  for (i=0;i<3;i++){
    persona[i].registrar_datos();
  }
  for (i=0;i<3;i++){
    persona[i].mostrar_datos();
  }
  
}
