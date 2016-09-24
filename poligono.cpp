#include "poligono.h"
#include "point.h"
#include <cmath>
#include <iostream>
#include <math.h>

poligono::poligono(){
}
    //funcao para pegar os vertices
    void poligono::vertices(){
        char aux;
        float X,Y;
        for(int i=0;i<100;i++){
            cout<<"digite o as coordenadas X e Y de cada vertice"<<endline;
            cin>>X>>Y;
            cout<<"caso tenha terminado de colocar os vertices ditige s e aperte enter, caso contrario digite n e aperte enter e continue fornecendo os vertices"<<endline;
            cin>>aux;
            V[i]=setXY(X,Y);
            N++;
            if(aux=='s'){
                break;
            }
            }
        }

    //funcao para retornar a quantidade de vertices
    int poligono::returnN(){
        return N;
    }

    //funcao para retornar a area do poligono
    float poligono::area()
    {
        point V[100];
        float a1,a2,afinal;
        for(int i=0;i<N;i++)
        {
            a1 += V[i].getX() * V[i+1].getY();
            a2 += V[i+1].getX() * V[i].getY();
        }
        afinal = (fabs(a1-a2))/2; // calcula o módulo
        return afinal;

    }

    //funcao para transladar o poligono
    void poligono::move(float a, float b)
    {
        point V[100];
        for(int i = 0;i < N;i++)
        {
            V[i].setX(n[i].getX()+a);
            V[i].setY(n[i].getY()+b);

        }
    }

    //funcao para rotacionar o poligo teta graus entorno de um ponto fornecido pelo usuario
    void poligono::rotacionar(){
        float angulo,x,y,xnew,ynew;
        point p1;
    cout<<"informe o angulo que deseja rotacionar em sentido anti-horario"<<endline;
    cin>>angulo;
    cout<<"informe o ponto pelo qual deseja rotacionar o poligono"<<endline;
    cin>>x>>y;
    p1.setXY(x,y);
    for(int i=0;i<N;i++){
        xnew = x+(V[i].x-x)*cos(angulo)-(V[i].y - y)*sin(angulo);
        ynew = y+(V[i].x-x)*sin(angulo) + (V[i].y - y)*cos(angulo);
        V[i].setXY(xnew,ynew);
    }
    }

    //funcao para imprimir os vertices

    void poligono::imprime()
    {
        point V[100];
        for(int i=0;i<N;i++)
        {

            cout <<"("<< V[i].getX() <<","<< V[i].getY()<<")"<<"->";
        }
    }
