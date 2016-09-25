#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class retangulo : public poligono
{
public:
    int q, t, largura, altura;
    poligono retang;
    retangulo();

    void setAltura (int maltura);
    void setLargura (int mlargura);
    void criar (void);
    void setPonto(void);
};

#endif // RETANGULO_H
