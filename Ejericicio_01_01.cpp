// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 1
// Problema planteado: Calcular el área de un triángulo

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    float base, altura; // Declara variables para la base y altura del triángulo
    cout << "Ingrese la base del triángulo: "; // Solicita al usuario la base
    cin >> base; // Almacena la base ingresada
    cout << "Ingrese la altura del triángulo: "; // Solicita al usuario la altura
    cin >> altura; // Almacena la altura ingresada
    float area = (base * altura) / 2; // Calcula el área del triángulo
    cout << "El área del triángulo es: " << area << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}