
#include "Egresos.h"

Egresos::Egresos() {
 
}

Egresos::~Egresos() {

}

string Egresos::getTipoEgreso() {

    return tipoEgreso;
}

float Egresos::getMontoEgreso() {

    return montoEgreso;
}

void Egresos::imprimirTotalEgresos() {

    cout<<"Total de egresos: $"<<totalEgresos<<endl;
}

float Egresos::getTotalEgresos() {

	return totalEgresos;
}

