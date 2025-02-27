#ifndef _PROVEEDOR_H
#define _PROVEEDOR_H


#include <string>
using namespace std;
#include <vector>
using namespace std;

class Proveedor {
  private:
    int claveProveedor;

    string NombreProveedor;

    string TelefonoProveedor;

    string DireccionProveedor;


  public:
    Proveedor();

    ~Proveedor();

    int getClaveProveedor();

    inline void setClaveProveedor(int _claveProveedor);

    string getNombreProveedor();

    inline void setNombreProveedor(string _NombreProveedor);

    string getTelefonoProveedor();

    inline void setTelefonoProveedor(string _TelefonoProveedor);

    string getDireccionProveedor();

    inline void setDireccionProveedor(string _DireccionProveedor);

    inline void modificarProveedor(int indice, vector<Proveedor> & proveedores);

    static inline void imprimirProveedores(vector<Proveedor> & proveedores);

};
inline void Proveedor::setClaveProveedor() {

	claveProveedor = _claveProveedor;
}

inline void Proveedor::setNombreProveedor() {

	NombreProveedor = _NombreProveedor;
}

inline void Proveedor::setTelefonoProveedor() {

	TelefonoProveedor = _TelefonoProveedor;
}

inline void Proveedor::setDireccionProveedor() {

	DireccionProveedor = _DireccionProveedor;
}

inline void Proveedor::modificarProveedor() {

	int opcionModificarProveedor;
    cout<<"Utilice el numero que antecede al nombre del proveedor para seleccionarlo."<< endl;
    cout<< " " << endl;
    imprimirProveedores(proveedores); 

    cin >> opcionModificarProveedor;
    cout << " " << endl;
    cout << "Que desea modificar?" << endl;
    cout << "1) Nombre" << endl;
    cout << "2) Telefono" << endl;
    cout << "3) Direccion" << endl;
    cout << "4) Regresar al menu anterior" << endl;
    cout << " " << endl;
    int opcionModificar;
    cin >> opcionModificar;

    switch (opcionModificar) {
    case 1: {
        string nuevoNombre;
        cout << "Ingrese el nuevo nombre del proveedor: " << endl;
        cin >> nuevoNombre;
        proveedores[opcionModificarProveedor - 1].setNombreProveedor(nuevoNombre);
        break;
    }
    
    case 2: {
        string nuevoTelefono;
        cout << "Ingrese el nuevo telefono del proveedor: " << endl;
        cin >> nuevoTelefono;
        proveedores[opcionModificarProveedor - 1].setTelefonoProveedor(nuevoTelefono);
        break;
    }
    
    case 3: {
        string nuevaDireccion;
        cout << "Ingrese la nueva direccion del proveedor: " << endl;
        cin >> nuevaDireccion;
        proveedores[opcionModificarProveedor - 1].setDireccionProveedor(nuevaDireccion);
        break;
    }
    
    case 4: {
        break;
    }
    }
}

inline void Proveedor::imprimirProveedores()
{

    if (proveedores.empty()) {
        return;
    } else{
    cout << "Lista de proveedores:" << endl;
    for (size_t i = 0; i < proveedores.size(); ++i) {
        cout << i + 1 << ". ";
        cout << "Nombre: " << proveedores[i].getNombreProveedor() << " | ";
        cout << "Telefono:" << proveedores[i].getTelefonoProveedor() << " | ";
        cout << "Direccion:" << proveedores[i].getDireccionProveedor() << endl;
        }
	}
}

#endif
