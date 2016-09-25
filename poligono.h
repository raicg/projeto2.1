#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class poligono
{
public:
    int N=0;
    point V[100];


    poligono();
    ~poligono();

    //pegar vertices do poligono
    void vertices();

    //pegar vertices do poligono fornecendo o x e y na funcao
    void vertice(float _x, float _y);

    //retorna o numero de vertices
    int returnN();

    //calcula a area do poligono
    double area(float mlargura, float maltura);

    //translada os vertices do poligono
    void move(float a, float b);

    //rotaciona o poligono teta graus entorno de um ponto fornecido pelo usuario
    void rotacionar();

    //imprime os vertices do poligono
    void imprimir();

    //pega o centro de massa
    point CentrodeMassa();
};

#endif // POLIGONO_H
