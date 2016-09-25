#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief A classe Retangulo representa retângulos como polígonos
 */

class retangulo : public poligono {
    poligono p;
    float x, y, largura, altura;
public:
    retangulo(float mx, float my, float mlargura, float maltura);
    ~retangulo();
};

#endif // RETANGULO_H
