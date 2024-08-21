// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 15
// Problema planteado: Generar la secuencia

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    int filas = 8; // Número de filas en el patrón
    for (int i = 1; i <= filas; ++i) { // Itera sobre cada fila
        // Imprime la parte ascendente de la fila
        for (int j = 1; j <= i; ++j) { // Imprime números ascendentes
            cout << j; // Muestra el número
        }
        // Imprime la parte descendente de la fila
        for (int j = i - 1; j >= 1; --j) { // Imprime números descendentes
            cout << j; // Muestra el número
        }
        cout << endl; // Salta a la siguiente línea después de cada fila
    }
    return 0; // Finaliza el programa
}
