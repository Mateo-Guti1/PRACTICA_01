// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 14
// Problema planteado: Obtener el factorial de un número entero sin emplear el producto

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

// Función que realiza la multiplicación mediante sumas sucesivas
int multiplicarPorSuma(int a, int b) {
    int resultado = 0; // Inicializa el resultado en 0
    for (int i = 0; i < b; i++) {
        resultado += a; // Suma 'a' al resultado 'b' veces
    }
    return resultado; // Devuelve el resultado de la multiplicación
}

int main() {
    int numero; // Declara una variable para el número ingresado
    cout << "Ingrese un número entero: "; // Solicita al usuario un número entero
    cin >> numero; // Almacena el número ingresado
    
    int factorial = 1; // Inicializa el factorial en 1
    for (int i = 1; i <= numero; i++) {
        factorial = multiplicarPorSuma(factorial, i); // Calcula el factorial usando sumas sucesivas
    }
    
    cout << "El factorial de " << numero << " es: " << factorial << endl; // Muestra el resultado
    return 0; // Finaliza el programa
}
