
#include "Reservacion.h"

Reservacion::Reservacion() {

}

Reservacion::~Reservacion() {

}

int Reservacion::getClaveReservacion() {

    return claveReservacion;
}

string Reservacion::getFecha() {

    return Fecha;
}

int Reservacion::getNumeroPersonas() {

    return NumeroPersonas;
}

float Reservacion::getCosto() {

    return Costo;
}

int Reservacion::getCantidadMesesPago() {

    return cantidadMesesPago;
}

void Reservacion::hacerReservacion() {

    cout<<"Ingrese los detalles de la reservacion:" << endl;
    cout << "Clave de reservacion: ";
    cin>>claveReservacion;
    cout<<"Fecha: ";
    cin>>Fecha;
    cout<<"Numero de personas: ";
    cin>>NumeroPersonas;
    cout<<"Costo: ";
    cin>>Costo;
    cout<<"Cantidad de meses para el pago: ";
    cin>>cantidadMesesPago;
    cout<<"Reservacion realizada exitosamente."<<endl;
}

void Reservacion::imprimirReservacion() {

    cout<<"Detalles de la reservacion:"<<endl;
    cout<<"Clave de reservacion: "<<claveReservacion<<endl;
    cout<<"Fecha: "<<Fecha<<endl;
    cout<<"Numero de personas: "<<NumeroPersonas<<endl;
    cout<<"Costo: $"<<Costo<<endl;
    cout<<"Cantidad de meses para el pago: "<<cantidadMesesPago<<endl;
}

