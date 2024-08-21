// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 7
// Problema planteado: Mostrar el nombre del mes según su número

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int mes; // Declara una variable para el número del mes
    cout << "Ingrese el número del mes (1-12): "; // Solicita al usuario el número del mes
    cin >> mes; // Almacena el número ingresado
    switch (mes) { // Evalúa el número del mes
        case 1: cout << "Enero" << endl; break; // Muestra "Enero" si el mes es 1
        case 2: cout << "Febrero" << endl; break; // Muestra "Febrero" si el mes es 2
        case 3: cout << "Marzo" << endl; break; // Muestra "Marzo" si el mes es 3
        case 4: cout << "Abril" << endl; break; // Muestra "Abril" si el mes es 4
        case 5: cout << "Mayo" << endl; break; // Muestra "Mayo" si el mes es 5
        case 6: cout << "Junio" << endl; break; // Muestra "Junio" si el mes es 6
        case 7: cout << "Julio" << endl; break; // Muestra "Julio" si el mes es 7
        case 8: cout << "Agosto" << endl; break; // Muestra "Agosto" si el mes es 8
        case 9: cout << "Septiembre" << endl; break; // Muestra "Septiembre" si el mes es 9
        case 10: cout << "Octubre" << endl; break; // Muestra "Octubre" si el mes es 10
        case 11: cout << "Noviembre" << endl; break; // Muestra "Noviembre" si el mes es 11
        case 12: cout << "Diciembre" << endl; break; // Muestra "Diciembre" si el mes es 12
        default: cout << "Mes inválido" << endl; // Muestra un mensaje de error si el número no está en el rango
    }
    return 0; // Finaliza el programa
}
