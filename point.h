#ifndef POINT_H
#define POINT_H


class point
{
public:
    //variaveis X e Y dos pontos:
    float x,y;

    point();
    //funcao setar X:
    void setX(float mx);


    //funcao setar Y:
    void setY(float my);


    //funcao setar X e Y:
    void setXY(float dx, float dy);


    //funcao pegar X:
    float getX(void);


    //funcao pegar Y:
    float getY(void);


    //funcao adicionar ponto:
    point add(point p1);


    //funcao subtrair ponto:
    point sub(point p1);


    //funcao norma (distancia do ponto ao centro (0,0)):
    float norma(void);


    //funcao translada (Translada o ponto (x,y) de (+a,+b), de modo que, após as coordenadas do ponto serão (x+a,y+b):
    void translada(float a, float b);


    //funcao imprime:
    void imprime(void);

};

#endif // POINT_H
