// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 12
// Problema planteado: Verificar si un número es múltiplo de otro

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int num1, num2; // Declara variables para los dos números
    cout << "Ingrese el primer número: "; // Solicita al usuario el primer número
    cin >> num1; // Almacena el primer número ingresado
    cout << "Ingrese el segundo número: "; // Solicita al usuario el segundo número
    cin >> num2; // Almacena el segundo número ingresado
    if (num1 % num2 == 0) { // Verifica si el primer número es divisible por el segundo
        cout << num1 << " es múltiplo de " << num2 << "." << endl; // Muestra que es múltiplo
    } else {
        cout << num1 << " no es múltiplo de " << num2 << "." << endl; // Muestra que no es múltiplo
    }
    return 0; // Finaliza el programa
}
