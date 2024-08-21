// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 9
// Problema planteado: Mostrar los primeros 100 números primos

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

bool esPrimo(int num) {
    if (num <= 1) return false; // Verifica si el número es menor o igual a 1
    for (int i = 2; i <= num / 2; i++) { // Itera desde 2 hasta la mitad del número
        if (num % i == 0) return false; // Verifica si el número es divisible por i
    }
    return true; // Devuelve verdadero si el número es primo
}

int main() {
    int contador = 0; // Inicializa el contador de números primos
    int num = 2; // Inicia con el primer número a evaluar
    while (contador < 100) { // Mientras no se hayan encontrado 100 números primos
        if (esPrimo(num)) { // Verifica si el número es primo
            cout << num << " "; // Muestra el número primo
            contador++; // Incrementa el contador de números primos
        }
        num++; // Incrementa el número a evaluar
    }
    cout << endl; // Salta a la siguiente línea
    return 0; // Finaliza el programa
}
