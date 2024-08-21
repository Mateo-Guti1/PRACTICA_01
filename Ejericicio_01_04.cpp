// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 4
// Problema planteado: Convertir grados centígrados a Kelvin

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    float celsius; // Declara variable para la temperatura en grados centígrados
    cout << "Ingrese la temperatura en grados centígrados: "; // Solicita al usuario la temperatura en grados centígrados
    cin >> celsius; // Almacena la temperatura ingresada
    float kelvin = celsius + 273.15; // Convierte a Kelvin
    cout << "La temperatura en Kelvin es: " << kelvin << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}
