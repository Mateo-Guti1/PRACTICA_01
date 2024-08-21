// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 19
// Problema planteado: Convertir días, horas, minutos y segundos a segundos

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int dias, horas, minutos, segundos; // Declara las variables para días, horas, minutos y segundos

    // Solicita al usuario que ingrese la cantidad de días
    cout << "Ingrese la cantidad de días: ";
    cin >> dias; // Almacena el valor ingresado en la variable 'dias'

    // Solicita al usuario que ingrese la cantidad de horas
    cout << "Ingrese la cantidad de horas: ";
    cin >> horas; // Almacena el valor ingresado en la variable 'horas'

    // Solicita al usuario que ingrese la cantidad de minutos
    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos; // Almacena el valor ingresado en la variable 'minutos'

    // Solicita al usuario que ingrese la cantidad de segundos
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos; // Almacena el valor ingresado en la variable 'segundos'

    // Calcula el total de segundos
    int totalSegundos = (dias * 86400) + (horas * 3600) + (minutos * 60) + segundos;

    // Muestra el resultado en segundos
    cout << "El total en segundos es: " << totalSegundos << endl;

    return 0; // Finaliza el programa
}
