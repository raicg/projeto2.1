#include "retangulo.h"
#include "poligono.h"
#include <iostream>
using namespace std;

retangulo::retangulo()
{
}


void retangulo::setAltura(int maltura){
    cout << "Digite a altura do retangulo"<< endl;
    cin >> maltura;
    altura = maltura;
}

void retangulo::setLargura(int mlargura){
    cout << "Digite a largura do retangulo"<< endl;
    cin >> mlargura;
    largura = mlargura;

}

void retangulo::setPonto(void){
    cout << "Digite os pontos iniciais X e Y do retangulo"<< endl;
    cin >> retang.V[0].x >> retang.V[0].y;
}

void retangulo::criar(void){

    retang.N=3;

    retang.V[1].x = retang.V[0].x + largura;
    retang.V[1].y = retang.V[0].y;

    retang.V[2].x = retang.V[1].x;
    retang.V[2].y = retang.V[1].y - altura;

    retang.V[3].x = retang.V[2].x - largura;
    retang.V[3].y = retang.V[2].y;

}

