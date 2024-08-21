// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 2
// Problema planteado: Calcular el volumen de una esfera

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
#include <cmath> // Incluye la biblioteca para funciones matemáticas
using namespace std; // Usa el espacio de nombres estándar

int main() {
    float radio; // Declara variable para el radio de la esfera
    cout << "Ingrese el radio de la esfera: "; // Solicita al usuario el radio
    cin >> radio; // Almacena el radio ingresado
    float volumen = (4.0/3.0) * M_PI * pow(radio, 3); // Calcula el volumen de la esfera
    cout << "El volumen de la esfera es: " << volumen << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}