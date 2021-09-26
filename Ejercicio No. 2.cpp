#include <iostream>
using namespace std;

int main()
{
    // La clave correcta
    const string claveCorrecta = "2021";
    cout << "Ingrese el pin: ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "Pin incorrecto";
        // Con return detenemos la ejecución del programa
        return 0;
    }
    // EL usuario ingreso el pin correcto 
    cout << "Pin correcto\n Bienvenido\n Romeo Blanco\n Carnet: 0909-21-2761" << endl;
    double fondos = 5000; // Simular fondos
    double fondoss = 650; // Simular fondos
    string eleccion = "";
    // Menú
    while (eleccion != "2")
    {
        // Mostrar fondos
        cout << "Fondos disponibles: " << fondos << endl;
        cout << "Fondos disponibles: " << fondoss << endl;
        // Imprimir menú
        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
            // Cuánto quiere retirar
            double retiro;
            cout << "1. Q5000\n2. $650\nSeleccione: ";
			cin >> eleccion;
			cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
            // Comprobar si se puede retirar
            if (retiro > fondos || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }
            else
            {
                // En caso de que sí pueda retirar
                cout << " Ha retirado " << retiro << endl;
                // Restamos los fondos existentes
                fondos = fondos - retiro;
                // El ciclo sigue...
            }
        }
    }
    return 0;
}