
#include<iostream>
using namespace std;

#include"jugador.h"
#include"Juego.h"
int main(){
  Juego tresEnRaya;
  Jugador jugador1,jugador2;

  jugador1.registrarDatos();
  jugador2.registrarDatos();

  tresEnRaya.jugar(jugador1,jugador2);
  
  return 0;
}
