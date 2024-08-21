// Materia: Programación I, Paralelo 1
// Autor: Mateo Enrique Gutierrez
// Fecha creación: 20/08/2024
// Número de ejercicio: 8
// Problema planteado: Detectar si una letra es vocal, consonante o carácter especial

#include <iostream> // Incluye la biblioteca para entrada y salida de datos
using namespace std; // Usa el espacio de nombres estándar

int main() {
    char letra; // Declara una variable para la letra ingresada
    cout << "Ingrese una letra: "; // Solicita al usuario una letra
    cin >> letra; // Almacena la letra ingresada
    // Verifica si es una vocal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "Es una vocal." << endl; // Muestra que es una vocal
    }
    // Verifica si es una consonante
    else if ((letra >= 'b' && letra <= 'z') || (letra >= 'B' && letra <= 'Z')) {
        cout << "Es una consonante." << endl; // Muestra que es una consonante
    }
    // Si no es ni vocal ni consonante, es un carácter especial
    else {
        cout << "Es un carácter especial." << endl; // Muestra que es un carácter especial
    }
    return 0; // Finaliza el programa
}
