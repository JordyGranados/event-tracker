#ifndef _CLIENTE_H
#define _CLIENTE_H


#include "Reservacion.h"
#include <string>
using namespace std;
#include <vector>
using namespace std;

class Cliente : public Reservacion {
  private:
    int claveCliente;

    string NombreCliente;

    string TelefonoCliente;

    string DireccionCliente;


  public:
    Cliente();

    ~Cliente();

    int getClaveCliente();

    inline void setClaveCliente(int _claveCliente);

    string getNombreCliente();

    inline void setNombreCliente(string _NombreCliente);

    string getTelefonoCliente();

    inline void setTelefonoCliente(string _TelefonoCliente);

    string getDireccionCliente();

    inline void setDireccionCliente(string _DireccionCliente);

    inline void imprimirClientes(vector<Cliente> clientes);

    inline void imprimirCliente(int indice, vector<Cliente> clientes);

};
inline void Cliente::setClaveCliente() {

    claveCliente = _claveCliente;
}

inline void Cliente::setNombreCliente() {

    NombreCliente = _NombreCliente;
}

inline void Cliente::setTelefonoCliente() {

    TelefonoCliente = _TelefonoCliente;
}

inline void Cliente::setDireccionCliente() {

    DireccionCliente = _DireccionCliente;
}

inline void Cliente::imprimirClientes() {

    cout<<"Lista de clientes:"<<endl;
    for (size_t i = 0; i < clientes.size(); ++i) {
        cout << i + 1 << ". ";
        imprimirCliente(i, clientes);
    }
}

inline void Cliente::imprimirCliente() {

    cout<<clientes[indice].NombreCliente<<endl;
}

#endif
