// Operaciones Básicas en C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream> // Libreria de entrada y salida.

int main() {
    float numero1, numero2; // Declaracion de variables.

    std::cout << "Escribe el primer numero:"; // Entrada de datos se solocita al usuario que ingrese el numero 1.
    std::cin >> numero1;

    std::cout << "Escribe el segundo numero:"; // Entrada de datos se solocita al usuario que ingrese el numero 2.
    std::cin >> numero2;

    float suma = numero1 + numero2; // Operaciones matematicas suma, resta, multiplicacion y division.
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;

    std::cout << "La suma es: " << suma << std::endl; // Salida de datos se muestran los resultados de las operaciones.
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La multiplicacion es: " << multiplicacion << std::endl;
    std::cout << "La division es: " << division << std::endl;

    return 0;
}
