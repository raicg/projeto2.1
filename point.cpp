#include "point.h"
#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

//construtor de point:
point::point()
{
}


//funcao setar X:
void point::setX(float mx){
    x = mx;
    }


//funcao setar Y:
void point::setY(float my){
    y = my;
    }


//funcao setar X e Y:
void point::setXY(float dx, float dy){
    x = dx;
    y = dy;
    }


//funcao pegar X:
float point::getX(void){
    return x;
    }


//funcao pegar Y:
float point::getY(void){
    return y;
    }



//funcao adicionar ponto:
point  point::add(point p1){
    point p2;
    p2.x = x + p1.x;
    p2.y = y + p1.y;
    return(p2);
    }



//funcao subtrair ponto:
point  point::sub(point p1){
    point p2;
    p2.x = x - p1.x;
    p2.y = y - p1.y;
    return(p2);
    }



//funcao norma (distancia do ponto ao centro (0,0)):
float point::norma(void){
    float a;

    a = sqrt((x*x)+(y*y));

    return(a);
    }


//funcao translada (Translada o ponto (x,y) de (+a,+b), de modo que, após as coordenadas do ponto serão (x+a,y+b):
void point::translada(float a, float b){
    x = x+a;
    y = y+b;
    }


void point::imprime(void){
    cout << "(" << x << " , " << y << ")" << endl;
    }


