#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


class Jugador{
  string nombre;
  int vidas;
  int numero;
public:
  Jugador(){
    nombre="";
    vidas=3;
  }
  void cargarDatos(){
    cout<<"Ingrese sus datos: "<<endl;
    cout<<"nombre: "<<endl;
    cin.ignore();
    getline(cin,nombre);
    
  }

  int darNumero(){
    cin>>numero;
    return numero;
  }
  void quitarVida(){
    vidas--;
  }
  int getVidas(){
    return vidas;
  }
};
class Juego{
  Jugador jugador;
  int numeroRandom;
  int numeroJugador;
public:
  Juego(){
    srand(time(0));
    numeroRandom=rand()%30+1;//numero Random
  }
  void cargarJugador(Jugador jugador){
    this->jugador=jugador;
  }
  void jugar(){
    while(jugador.getVidas()){
      cout<<"Ingrese un numero entre [1-30]: ";
      numeroJugador=jugador.darNumero();
      if(numeroJugador==numeroRandom){
        cout<<"Ganaste!"<<endl;
        break;
      }
      if(numeroJugador<numeroRandom){
        cout<<"Tu numero es muy bajo"<<endl;
        cout<<"piensa en uno mas alto"<<endl;
        jugador.quitarVida();
      }
      if(numeroJugador>numeroRandom){
        cout<<"Tu numero es muy alto"<<endl;
        cout<<"piensa en uno mas bajo"<<endl;
        jugador.quitarVida();
      }
    }
  }
};


int main(){

  Jugador player1;
  Juego adivina;
    player1.cargarDatos();
    adivina.cargarJugador(player1);
    adivina.jugar();
    adivina.jugar();
  return 0;
}
