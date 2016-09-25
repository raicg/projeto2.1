#include <iostream>
#include "point.cpp"
#include "point.h"
#include "retangulo.h"
using namespace std;

int main()

{
point X;
float altura, largura;

cin>>X.x>>X.y>>largura>>altura;

retangulo objeto(X.x,X.y,largura,altura);

objeto.imprime();

    return 0;
}
