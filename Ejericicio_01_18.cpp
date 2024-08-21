// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 18
// Problema planteado: Determinar si un número es un número de Armstrong

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
#include <cmath> // Incluye la biblioteca para operaciones matemáticas
using namespace std; // Usa el espacio de nombres estándar

// Función para verificar si un número es un número de Armstrong
bool esNumeroDeArmstrong(int numero) {
    int original = numero; // Guarda el número original
    int suma = 0; // Inicializa la suma de las potencias
    int digitos = 0; // Cuenta el número de dígitos

    // Cuenta el número de dígitos
    while (numero > 0) {
        numero /= 10; // Elimina el último dígito
        digitos++; // Incrementa el contador de dígitos
    }

    numero = original; // Restaura el número original

    // Calcula la suma de los dígitos elevados a la potencia del número de dígitos
    while (numero > 0) {
        int digito = numero % 10; // Obtiene el último dígito
        suma += pow(digito, digitos); // Suma el dígito elevado a la potencia
        numero /= 10; // Elimina el último dígito
    }

    // Compara la suma con el número original
    return suma == original;
}

int main() {
    int numero; // Declara una variable para el número ingresado
    cout << "Ingrese un número entero: "; // Solicita al usuario un número entero
    cin >> numero; // Almacena el número ingresado

    if (esNumeroDeArmstrong(numero)) { // Verifica si el número es de Armstrong
        cout << numero << " es un número de Armstrong." << endl; // Muestra el resultado
    } else {
        cout << numero << " no es un número de Armstrong." << endl; // Muestra el resultado
    }

    return 0; // Finaliza el programa
}