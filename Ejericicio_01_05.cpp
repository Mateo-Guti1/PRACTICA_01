// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 5
// Problema planteado: Verificar si un número es primo

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int numero, i; // Declara variables para el número y el contador
    bool es_primo = true; // Asume que el número es primo
    cout << "Ingrese un número entero: "; // Solicita al usuario un número entero
    cin >> numero; // Almacena el número ingresado
    if (numero <= 1) { // Verifica si el número es menor o igual a 1
        es_primo = false; // Si es así, no es primo
    } else {
        for (i = 2; i <= numero / 2; i++) { // Itera desde 2 hasta la mitad del número
            if (numero % i == 0) { // Verifica si el número es divisible por i
                es_primo = false; // Si es así, no es primo
                break; // Sale del bucle
            }
        }
    }
    if (es_primo) // Si es primo
        cout << numero << " es un número primo." << endl; // Muestra el resultado
    else // Si no es primo
        cout << numero << " no es un número primo." << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}
