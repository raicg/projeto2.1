#include "retangulo.h"
#include "poligono.h"
#include <iostream>
using namespace std;

retangulo::retangulo(int w, int y, int largura, int altura)
{
    V[0].x=w;
    V[0].y=y;
    V[1].x=w+largura;
    V[1].y=y;
    V[2].x=w+largura;
    V[2].y=y-altura;
    V[3].x=w;
    V[3].y=y-altura;
    N=4;
}
