
#ifndef JUEGO_H
#define JUEGO_H

class Juego{
  Jugador player1;
  Jugador player2;
  
public:
  void jugar(Jugador jugador1,Jugador jugador2){
    player1=jugador1;
    player2=jugador2;
    cout<<"Aqui esta el juego"<<endl;
  }
};

#endif
