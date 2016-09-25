#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class retangulo : public poligono
{
public:
    int q, t, largura, altura;

    poligono retang;

    retangulo(int x, int y, int largura, int altura);

    /*void setAltura (int maltura);
    void setLargura (int mlargura);
    point* criar(void);
    void setPonto(void);*/
};

#endif // RETANGULO_H
