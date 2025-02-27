int main(){
	
	int opcion;
	vector<Cliente> clientes;
	vector<Ingresos> ingresos;
	vector<Reservacion> reservaciones;
	vector<Egresos> egresos;
	vector<Proveedor> proveedores;

	
	while (true){
		
		cout<<" "<<endl;
		cout<<"Bienvenido al menu principal"<<endl;
		cout<<"Elija una de las siguientes opciones:"<<endl;
		cout<<"1) Ingresos"<<endl;
		cout<<"2) Egresos"<<endl;
		cout<<"3) Salir"<<endl;
		cin>>opcion;
		
		switch (opcion){
			
			case 1: {

				int opcioncliente;
				int menu = 1;
				while (menu == 1){
					
					cout<<" "<<endl;
					cout<<"Elija una de las siguientes opciones"<<endl;
					cout<<"1) Crear cliente"<<endl;
					cout<<"2) Modificar cliente"<<endl;
					cout<<"3) Imprimir lista de clientes"<<endl;
					cout<<"4) Agregar ingreso"<<endl;
					cout<<"5) Imprimir total de ingresos"<<endl;
					cout<<"6) Hacer una reservacion"<<endl;
					cout<<"7) Ver reservaciones"<<endl;
					cout<<"8) Regresar al menu principal"<<endl;
					cin>>opcioncliente;
					cout<<" "<<endl;
					
					switch (opcioncliente){
						
						case 1:{
							
							string nombre;
							string telefono;
							string direccion;
							Cliente objetocliente;
							cout<<"Vamos a crear un cliente "<<endl;
							cout<<"Por favor ingrese el nombre del cliente: "<<endl;
							cin>>nombre;
							cout<<"Por favor ingrese su telefono: "<<endl;
							cin>>telefono;
							cout<<"Por favor ingrese su direccion: "<<endl;
							cin>>direccion;
							objetocliente.setNombreCliente(nombre);
							objetocliente.setTelefonoCliente(telefono);
							objetocliente.setDireccionCliente(direccion);
							clientes.push_back(objetocliente);
							break;
						}					
						case 2:{
							
							if (clientes.empty()) {
								cout<<"No hay clientes para modificar."<<endl;
							break;} 
							
							else {
								
								int opcion;
								int opcionmodificar;
								cout<<"Utilice el numero que antecede al nombre del cliente para seleccionarlo."<<endl;
								cout<<" "<<endl;
								clientes[0].imprimirClientes(clientes);
                                cin>>opcion;
                                cout<<" "<<endl;
                                cout<<"Que desea modificar?"<<endl;
                                cout<<"1) Nombre"<<endl;
                                cout<<"2) Telefono"<<endl;
                                cout<<"3) Direccion"<<endl;
                                cout<<"4) Regresar al menu anterior"<<endl;
                                cout<<" "<<endl;
                                cin>>opcionmodificar;
                               
							    switch (opcionmodificar){
							    	
                                	case 1: {
                                		string nuevonombre;
										cout<<"Ingrese el nuevo nombre: "<<endl;
                                		cin>>nuevonombre;
                                		clientes[opcion-1].setNombreCliente(nuevonombre);
										break; }
									
									case 2: {
                                		string nuevotelefono;
										cout<<"Ingrese el nuevo telefono: "<<endl;
                                		cin>>nuevotelefono;
                                		clientes[opcion-1].setTelefonoCliente(nuevotelefono);
										break; }
								
									case 3: {
										string nuevadireccion;
										cout<<"Ingrese la nueva direccion: "<<endl;
										cin>>nuevadireccion;
										clientes[opcion-1].setDireccionCliente(nuevadireccion);
										break; }
									case 4: {
										break;
									}	
								}
								}
							}
						case 3:{
							clientes[0].imprimirClientes(clientes);
								break;
							}
                        case 4: {
                            Ingresos ingreso;
                            float montoingreso;
                            cout << "Cuanto va a registrar como un ingreso?" << endl;
                            cin >> montoingreso;
                            ingreso.agregarIngreso(montoingreso);
                            ingresos.push_back(ingreso);
                            break;
                        }
                        case 5: {
   							if (ingresos.empty()) {
        					cout << "No hay ingresos registrados." << endl;
    						} else {
        						float totalIngresos = 0.0;
								for (vector<Ingresos>::iterator it = ingresos.begin(); it != ingresos.end(); ++it) {
    							totalIngresos += it->getTotalIngresos();
								}
        						cout << "Total de ingresos: $" << totalIngresos << endl;
    								}
                            break;
                        }
                        case 6: {
                            Reservacion reservacion;
                            reservacion.hacerReservacion();
                            reservaciones.push_back(reservacion);
                            break;
                        }
                        case 7:{
							ingresos[0].verReservaciones(reservaciones);
							break;
						}
						case 8: {
							menu = 0;
							break;
							};
							}
						}
						break;
					}
			case 2: {
            int opcionegresos;
            while (true) {
                cout<<" "<<endl;
                cout<<"Elija una de las siguientes opciones:"<<endl;
                cout<<"1) Registrar proveedor"<<endl;
                cout<<"2) Modificar proveedor"<<endl;
                cout<<"3) Registrar egresos"<<endl;
                cout<<"4) Imprimir total de egresos"<<endl;
                cout<<"5) Salir al menu anterior"<<endl;
                cin>>opcionegresos;
                cout<<" "<<endl;
                switch (opcionegresos) {
                case 1: {
                    string nombreProveedor;
                    string telefonoProveedor;
                    string direccionProveedor;
                    Proveedor proveedor;
                    cout<<"Vamos a registrar un proveedor"<<endl;
                    cout<<"Por favor ingrese el nombre del proveedor: "<<endl;
                    cin>>nombreProveedor;
                    cout<<"Por favor ingrese su telefono: "<<endl;
                    cin>>telefonoProveedor;
                    cout<<"Por favor ingrese su direccion: "<<endl;
                    cin>>direccionProveedor;
                    proveedor.setNombreProveedor(nombreProveedor);
                    proveedor.setTelefonoProveedor(telefonoProveedor);
                    proveedor.setDireccionProveedor(direccionProveedor);
                    proveedores.push_back(proveedor);
                    break;
                }
				case 2: {
				    int opcionModificarProveedor;
					if (proveedores.empty()) {
					cout << "No hay proveedores registrados." << endl;
						break;
					}
				    cout << " " << endl;
					proveedores[opcionModificarProveedor - 1].modificarProveedor(opcionModificarProveedor - 1, proveedores);
				    break;
				}
                case 3: {
                    Egresos egreso;
                    float montoEgreso;
                    cout<<"Cuanto va a registrar como un egreso?"<<endl;
                    cin>>montoEgreso;
                    egreso.agregarEgreso(montoEgreso);
                    egresos.push_back(egreso);
                    break;
                }
                case 4: {
					if (egresos.empty()) {
					cout << "No hay ingresos registrados." << endl;
					} else {
						float totalEgresos = 0.0;
						for (vector<Egresos>::iterator it = egresos.begin(); it != egresos.end(); ++it) {
						totalEgresos += it->getTotalEgresos();
						}
						cout << "Total de egresos: $" << totalEgresos << endl;
							}
                    break;
                        }
                case 5: {
                    break;
                }
                }
		break;}
	}
			case 3: {
				exit(3);
			}
	}}}
