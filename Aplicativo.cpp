#include <iostream>
#include "Ingresar.h"
#include "Convertir.h"

using namespace std;

int main(int argc, char** argv) {
	
	Ingresar informacion;
    Convertir infor;

    string dato;
    int x;

    informacion.ingresar(dato);

    cout<<endl;
    cout<<dato<<endl;
    cout<<endl;

    x=infor.convertir(dato);

    cout<<x+1<<endl;

	return 0;
}