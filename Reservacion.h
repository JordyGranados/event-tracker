#ifndef _RESERVACION_H
#define _RESERVACION_H


#include <string>
using namespace std;

class Reservacion {
  private:
    int claveReservacion;

    string Fecha;

    int NumeroPersonas;

    float Costo;

    int cantidadMesesPago;


  public:
    Reservacion();

    ~Reservacion();

    int getClaveReservacion();

    inline void setClaveReservacion(int _claveReservacion);

    string getFecha();

    inline void setFecha(string _Fecha);

    int getNumeroPersonas();

    inline void setNumeroPersonas(int _NumeroPersonas);

    float getCosto();

    inline void setCosto(float _Costo);

    int getCantidadMesesPago();

    inline void setCantidadMesesPago(int _cantidadMesesPago);

    void imprimirReservaciones();

    void hacerReservacion();

    void imprimirReservacion();

};
inline void Reservacion::setClaveReservacion() {

    claveReservacion = _claveReservacion;
}

inline void Reservacion::setFecha() {

    Fecha = _Fecha;
}

inline void Reservacion::setNumeroPersonas() {

    NumeroPersonas = _NumeroPersonas;
}

inline void Reservacion::setCosto() {

    Costo = _Costo;
}

inline void Reservacion::setCantidadMesesPago() {

    cantidadMesesPago = _cantidadMesesPago;
}

#endif
