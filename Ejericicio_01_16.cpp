// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 16
// Problema planteado: Mostrar números del 1 a N con sustituciones específicas

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int N; // Declara una variable para el límite superior
    cout << "Ingrese el valor de N: "; // Solicita al usuario el valor de N
    cin >> N; // Almacena el valor ingresado en N

    for (int i = 1; i <= N; ++i) { // Itera desde 1 hasta N
        if (i % 3 == 0 && i % 5 == 0) { // Verifica si i es múltiplo de 3 y 5
            cout << "z" << endl; // Muestra 'z'
        } else if (i % 3 == 0) { // Verifica si i es múltiplo de 3
            cout << "x" << endl; // Muestra 'x'
        } else if (i % 5 == 0) { // Verifica si i es múltiplo de 5
            cout << "y" << endl; // Muestra 'y'
        } else {
            cout << i << endl; // Muestra el número i si no es múltiplo de 3 ni de 5
        }
    }

    return 0; // Finaliza el programa
}
