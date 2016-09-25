#ifndef POLIGONO_H
#define POLIGONO_H

#include "point.h"

class poligono
{
public:
    poligono();

    int N=0;
    point V[100];

    //pergar vertices do poligono
    void vertices();

    //retorna o numero de vertices
    int returnN();

    //calcula a area do poligono
    float area();

    //translada os vertices do poligono
    void move(float a, float b);

    //rotaciona o poligono teta graus entorno de um ponto fornecido pelo usuario
    void rotacionar();

    //imprime os vertices do poligono
    void imprime();


};

#endif // POLIGONO_H
