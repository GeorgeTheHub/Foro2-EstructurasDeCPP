// Elabore programas que muestre un menu de productos de un cine, el cual,
// muestre el precio producto que fue seleccionado -- PROGRAMA 2 -- Use switch

#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        
        cout << "** Menu de productos disponibles **" << endl;
        cout << "1.- Torta" << endl;
        cout << "2.- Palomitas" << endl;
        cout << "3.- Agua" << endl;
        cout << "4.- Salir y terminar operacion" << endl;
        cout << "A continuacion, escriba la accion que desee realizar: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Precio de torta individual: $25.00 MXN" << endl;
                break;
            
            case 2:
                cout << "Precio de las palomitas: $40.00 MXN" << endl;
                break;
            
            case 3:
                cout << "Precio de botella de agua: $20.00 MXN" << endl;
                break;
            
            case 4:
                cout << "Gracias por su adquisicion, vuelva pronto!" << endl;
                break;
            
            default:
                if (opcion != 4) {
                    cout << "Opcion invalida, por favor intente de nuevo." << endl;
                }
                break;
        }
                    cout << "\n" << endl;
    } while (opcion != 4);
}