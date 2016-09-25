#include "retangulo.h"
#include "poligono.h"
#include <iostream>

using namespace std;


retangulo::retangulo(float mx, float my, float mlargura, float maltura)
{
    x = mx; y = my; largura = mlargura; altura = maltura;

    p.vertice(x,y+altura);
    p.vertice(x+largura,y+altura);
    p.vertice(x,y);
    p.vertice(x+largura,y);

    p.imprimir();

    cout << "Area do retangulo = " << p.area(altura,largura) <<endl;


    p.move(-3,4);

    p.imprimir();

    cout << "Area do retangulo = " << p.area(altura,largura) <<endl;

    point cm;
    cm = p.CentrodeMassa();

    p.rotacionar();

    p.imprimir();

    cout << "Area do retangulo = " << p.area(altura,largura) <<endl;

}

retangulo::~retangulo(){}

