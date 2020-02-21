#include <iostream>
#include "punto.h"
using std::cout;
using std::endl;
Punto::Punto(float x_coord, float y_coord){
x = x_coord;
y = y_coord;
}
Punto::Punto(){}
void Punto::asignarX(float x_coord){
x = x_coord;
}
void Punto::asignarY(float y_coord){
y = y_coord;
}
float Punto::obtenerX()const{
return x;
}
float Punto::obtenerY()const{
return y;
}
void Punto::printData(){

cout << "El punto es: (" << x << ", " << y << ")" << endl;
}
