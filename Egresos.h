#ifndef _EGRESOS_H
#define _EGRESOS_H


#include "Proveedor.h"
#include <string>
using namespace std;

class Egresos : public Proveedor {
  private:
    string tipoEgreso;

    float montoEgreso;

    float totalEgresos;


  public:
    Egresos();

    ~Egresos();

    string getTipoEgreso();

    inline void setTipoEgreso(string _tipoEgreso);

    float getMontoEgreso();

    inline void setMontoEgreso(float _montoEgreso);

    void imprimirTotalEgresos();

    inline void agregarEgreso(float monto);

    float getTotalEgresos();

};
inline void Egresos::setTipoEgreso() {

    tipoEgreso = _tipoEgreso;
}

inline void Egresos::setMontoEgreso() {

    montoEgreso = _montoEgreso;
}

inline void Egresos::agregarEgreso() {

	totalEgresos += monto;
	cout<<"Egreso registrado exitosamente."<<endl;
    cout<<" "<<endl;
}

#endif
