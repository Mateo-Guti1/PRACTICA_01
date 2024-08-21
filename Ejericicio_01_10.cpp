// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 10
// Problema planteado: Calcular la cantidad de dígitos de un número entero

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int numero; // Declara una variable para el número entero
    cout << "Ingrese un número entero: "; // Solicita al usuario un número entero
    cin >> numero; // Almacena el número ingresado
    int digitos = 0; // Inicializa el contador de dígitos
    while (numero != 0) { // Mientras el número no sea 0
        numero /= 10; // Divide el número por 10 para eliminar el último dígito
        digitos++; // Incrementa el contador de dígitos
    }
    cout << "El número tiene " << digitos << " dígitos." << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}
