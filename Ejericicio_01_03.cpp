// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 3
// Problema planteado: Calcular el promedio de notas

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int n; // Declara una variable para el número de notas
    cout << "Ingrese el número de notas: "; // Solicita al usuario el número de notas
    cin >> n; // Almacena el número de notas ingresado
    float suma = 0, nota; // Declara variables para la suma de las notas y la nota individual
    for (int i = 0; i < n; i++) { // Itera n veces
        cout << "Ingrese la nota " << i + 1 << ": "; // Solicita al usuario una nota
        cin >> nota; // Almacena la nota ingresada
        suma += nota; // Suma la nota al total
    }
    float promedio = suma / n; // Calcula el promedio
    cout << "El promedio de las notas es: " << promedio << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}