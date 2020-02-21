#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include <cmath>
#include "punto.h"
using namespace std;
class Rectangulo{
private:
Punto superiorIzquierdo;
Punto superiorDerecho;
Punto inferiorIzquierdo;
Punto inferiorDerecho;
public:
Rectangulo(){
cout << "Se ha creado un rectangulo" << endl;
}
void AsignarSupIzq(float x, float y){
superiorIzquierdo.asignarX( x);
superiorIzquierdo.asignarY( y);
}
void AsignarSupDer(float x, float y){
superiorDerecho.asignarX( x);
superiorDerecho.asignarY( y);
}
void AsignarInfIzq(float x, float y){
inferiorIzquierdo.asignarX( x);
inferiorIzquierdo.asignarY( y);
}
void AsignarInfDer(float x, float y){
inferiorDerecho.asignarX( x);
inferiorDerecho.asignarY( y);
}
float Perimetro(){
float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
return (base*2) + (altura*2);
}
float Area(){
float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
return (base*altura);
}
float Distancias(){
   float  DB1 = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
     float DB2 = abs(superiorDerecho.obtenerX() - superiorIzquierdo.obtenerX());
      float DA1 = abs(inferiorDerecho.obtenerY() - superiorDerecho.obtenerY());
       float DA2 = abs(inferiorIzquierdo.obtenerY() - superiorIzquierdo.obtenerY());

    int C;

        if (DB1==DB2&&DA1==DA2){

            C=DB1*DA1;

                if (C=1){
                    cout << "Es un rectaguloooooo!!!!!" << endl;
                        }
                    else if(C=0) {

                            cout << "¡Error!!!! no es un rectaguloooooo!" << endl;
                                    }

                                        }
}
};
#endif
