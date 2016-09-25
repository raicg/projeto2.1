#include "poligono.h"
#include "point.h"
#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

poligono::poligono()
{
}


poligono::~poligono(){}


    //funcao para pegar os vertices

    void poligono::vertices()
    {
        char aux;

        float X,Y;

        for(int i=0;i<100;i++)
            {

                cout<<"digite o as coordenadas X e Y de cada vertice"<<endl;
                cin>>X>>Y;
                cout<<"caso tenha terminado de colocar os vertices ditige s e aperte enter, caso contrario "
                      "digite n e aperte enter e continue fornecendo os vertices"<<endl;
                cin>>aux;

                V[i].setXY(X,Y);
                    if(aux=='s')
                    {
                     break;
                    }
                N++;
            }
     }

    //funcao para pegar um vertice fornecendo um valor x e y
    void poligono::vertice(float mx, float my){
        V[N].setX(mx);
        V[N].setY(my);
        N++;
    }



    //funcao para retornar a quantidade de vertices
    int poligono::returnN()
    {
        return N;
    }



    //funcao para retornar a area do poligono
    double poligono::Area()
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
    double poligono::area(float mlargura, float maltura)
    {
        double area;
        area = mlargura*maltura;
        return area;



    }


    //funcao para transladar o poligono
    void poligono::move(float a, float b)
    {
        int i;
        for(i=0;i<N;i++){
            V[i].setX(V[i].getX()+a);
            V[i].setY(V[i].getY()+b);
        }
    }

    //funcao para rotacionar o poligo teta graus entorno de um ponto fornecido pelo usuario
    void poligono::rotacionar()
    {

    }

    //funcao para imprimir os vertices

    void poligono::imprimir(){
        int i;
        for(i=0;i<N;i++){
            cout << "(" << V[i].getX() << "," << V[i].getY() << ") -> ";
        }
        cout << "(" << V[0].getX() << "," << V[0].getY() << ")." <<endl;
    }


    point poligono::CentrodeMassa()
    {
        float cmx, cmy;
        for(int i=0;i<N;i++){
           cmx = V[i].getX() + cmx;
           cmy = V[i].getY() + cmy;
        }
        cmx = cmx/N;
        cmy = cmy/N;
    point p;
    p.setXY(cmx,cmy);
        return p;
    }
