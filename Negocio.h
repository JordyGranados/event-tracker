#ifndef _NEGOCIO_H
#define _NEGOCIO_H


#include "Egresos.h"
#include "Ingresos.h"
#include <string>
using namespace std;

class Negocio : public Egresos, public Ingresos {
  private:
    string nombreNegocio;

    string direccionNegocio;


  public:
    Negocio();

    ~Negocio();

    string getNombreNegocio();

    inline void setNombreNegocio(string _nombreNegocio);

    string getDireccionNegocio();

    inline void setDireccionNegocio(string _direccionNegocio);

};
inline void Negocio::setNombreNegocio() {

    nombreNegocio = _nombreNegocio;
}

inline void Negocio::setDireccionNegocio() {

    direccionNegocio = _direccionNegocio;
}

#endif
