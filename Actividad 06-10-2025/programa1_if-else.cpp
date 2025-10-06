// Elabore programas que muestre un menu de productos de un cine, el cual,
// muestre el precio producto que fue seleccionado -- PROGRAMA 1 -- Use if-else

#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {

        cout << "\tMenu de productos disponibles" << endl;
        cout << "1.- Torta" << endl;
        cout << "2.- Palomitas" << endl;
        cout << "3.- Agua" << endl;
        cout << "4.- Salir y terminar operacion" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Precio de torta individual: $25.00 MXN" << endl;
        }

        else if (opcion == 2)
        {
        cout << "Precio de las palomitas: $40.00 MXN" << endl;
        }

        else if (opcion == 3)
        {
        cout << "Precio de botella de agua: $25.00 MXN" << endl;
        }

        else if (opcion == 4)
        {
        cout << "Gracias por su adquisicion, vuelva pronto!" << endl;
        }
        
        else
        {
        cout << "Opcion invalida, por favor intente de nuevo." << endl;
        }
    }

}