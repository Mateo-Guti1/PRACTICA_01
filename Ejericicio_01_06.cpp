// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 6
// Problema planteado: Verificar si dos números son amigos

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int sumaDivisores(int n) {
    int suma = 0; // Inicializa la suma de divisores
    for (int i = 1; i <= n / 2; i++) { // Itera hasta la mitad de n
        if (n % i == 0) { // Verifica si i es un divisor de n
            suma += i; // Suma el divisor a la suma
        }
    }
    return suma; // Devuelve la suma de los divisores
}

int main() {
    int num1, num2; // Declara variables para los dos números
    cout << "Ingrese el primer número: "; // Solicita al usuario el primer número
    cin >> num1; // Almacena el primer número ingresado
    cout << "Ingrese el segundo número: "; // Solicita al usuario el segundo número
    cin >> num2; // Almacena el segundo número ingresado
    // Verifica si los números son amigos
    if (sumaDivisores(num1) == num2 && sumaDivisores(num2) == num1) {
        cout << num1 << " y " << num2 << " son números amigos." << endl; // Muestra el resultado si son amigos
    } else {
        cout << num1 << " y " << num2 << " no son números amigos." << endl; // Muestra el resultado si no son amigos
    }
    return 0; // Finaliza el programa
}
