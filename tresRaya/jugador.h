
#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador{
  string nombre;
public:
  void registrarDatos(){
    cout<<"Ingrese su nombre: ";
    getline(cin,nombre);
  }
};

#endif
