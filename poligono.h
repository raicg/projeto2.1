#ifndef POLIGONO_H
#define POLIGONO_H

#include "point.h"

class poligono
{
private:
    int N;
    point V[100];

public:
    poligono();

    //pergar vertices do poligono
    void vertices();

    //retorna o numero de vertices
    int returnN();

    //calcula a area do poligono
    void area();

    //translada os vertices do poligono
    void move(float a, float b);

    //rotaciona o poligono teta graus entorno de um ponto fornecido pelo usuario
    void rotacionar();

    //imprime os vertices do poligono
    void imprimir();


};

#endif // POLIGONO_H
