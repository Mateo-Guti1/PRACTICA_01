// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 13
// Problema planteado: Mostrar un número entero con las cifras al revés

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int numero, invertido = 0; // Declara variables para el número y el número invertido
    cout << "Ingrese un número entero: "; // Solicita al usuario un número entero
    cin >> numero; // Almacena el número ingresado
    while (numero != 0) { // Mientras el número no sea 0
        invertido = invertido * 10 + numero % 10; // Agrega el último dígito del número a la cifra invertida
        numero /= 10; // Elimina el último dígito del número
    }
    cout << "El número invertido es: " << invertido << endl; // Muestra el número invertido
    return 0; // Finaliza el programa
}
