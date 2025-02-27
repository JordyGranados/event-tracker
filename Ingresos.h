#ifndef _INGRESOS_H
#define _INGRESOS_H


#include "Reservacion.h"
#include <vector>
using namespace std;

class Ingresos : public Reservacion {
  public:
    Ingresos();

    ~Ingresos();

    void imprimirTotalIngresos();

    inline void agregarIngreso(float monto);

    float getTotalIngresos();

    inline void verReservaciones(vector<Reservacion> reservaciones);


  private:
    float totalIngresos;

};
inline void Ingresos::agregarIngreso() {

    totalIngresos += monto;
    cout<<"Ingreso registrado exitosamente."<<endl;
    cout<<" "<<endl;
}

inline void Ingresos::verReservaciones() {

    if (reservaciones.empty()) {
        cout << "No hay reservaciones registradas." << endl;
    } else {
        cout << "Lista de reservaciones:" << endl;
        for (size_t i = 0; i < reservaciones.size(); ++i) {
            cout << i + 1 << ". ";
            reservaciones[i].imprimirReservacion();
        }
    }
}

#endif
