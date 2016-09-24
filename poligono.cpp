#include "poligono.h"
#include "point.h"
#include <cmath>
#include <iostream>

poligono::poligono()
{
    //funcao para pegar os vertices
    void poligono::vertices(){
        char aux;
        float X,Y;
        for(int i=0;i<100;i++){
            cout<<"digite o as coordenadas X e Y de cada vertice"<<endline;
            cin>>X>>Y>>;
            cout<<"caso tenha terminado de colocar os vertices ditige s e aperte enter, caso contrario digite n e aperte enter e continue fornecendo os vertices"<<endline;
            cin>>aux;
            V[i]=setXY(X,Y);
            N++;
            if(aux=='s'){
                break;
            }
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
        float a1,a2,a_final;
        for(int i=0;i<N;i++)
        {
            a1 += V[i].getX() * V[i+1].getY();
            a2 += V[i+1].getX() * V[i].getY();
        }
        a_final = (fabs(a1-a2))/2; // calcula o módulo
        return a_final;

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
}
