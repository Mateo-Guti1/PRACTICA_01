// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 11
// Problema planteado: Multiplicar dos números enteros usando sumas sucesivas

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int num1, num2, resultado = 0; // Declara variables para los dos números y el resultado
    cout << "Ingrese el primer número: "; // Solicita al usuario el primer número
    cin >> num1; // Almacena el primer número ingresado
    cout << "Ingrese el segundo número: "; // Solicita al usuario el segundo número
    cin >> num2; // Almacena el segundo número ingresado
    for (int i = 0; i < abs(num2); i++) { // Itera el valor absoluto del segundo número veces
        resultado += num1; // Suma el primer número al resultado
    }
    if (num2 < 0) resultado = -resultado; // Si el segundo número es negativo, invierte el signo del resultado
    cout << "El resultado de la multiplicación es: " << resultado << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}
