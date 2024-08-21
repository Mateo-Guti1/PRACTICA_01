// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 17
// Problema planteado: Convertir un número decimal a binario sin usar funciones predefinidas

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int decimal; // Declara una variable para el número decimal
    cout << "Ingrese un número decimal: "; // Solicita al usuario un número decimal
    cin >> decimal; // Almacena el número ingresado

    if (decimal == 0) { // Caso especial para el número 0
        cout << "El número binario es: 0" << endl; // Muestra el resultado
        return 0; // Finaliza el programa
    }

    int binario[32]; // Array para almacenar los dígitos binarios (suficiente para 32 bits)
    int i = 0; // Índice para el array

    while (decimal > 0) { // Mientras el número decimal sea mayor que 0
        binario[i] = decimal % 2; // Almacena el residuo de la división por 2 (0 o 1)
        decimal /= 2; // Divide el número decimal por 2
        i++; // Incrementa el índice
    }

    cout << "El número binario es: "; // Muestra el prefijo del resultado

    // Imprime el array de binario en orden inverso
    for (int j = i - 1; j >= 0; j--) { // Recorre el array desde el último elemento
        cout << binario[j]; // Muestra cada dígito binario
    }

    cout << endl; // Salta a la siguiente línea
    return 0; // Finaliza el programa
}
