#include "Ingresar.h"
#include <iostream>

using namespace std;

string Ingresar::ingresar(string &msj){
    string dato;
    cout<<"Ingrese un dato: ";
    cin>>msj;
    dato=msj;
    return dato;
}