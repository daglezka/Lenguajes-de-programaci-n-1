/******************************************************************************

Autor: Daniel Quezada
Actividad #2
Operaciones Básicas en C++
12/04/2025

*******************************************************************************/
#include <iostream>

int main()
{
    float numero1, numero2;
    
    std::cout << "Escribe el primer número: "; //Se imprime en pantalla el mensaje para que se ingrese el primer número.
    std::cin >> numero1; //Se almacena en la variable "numero1"
    
    std::cout << "Escribe el segundo número: ";//Se imprime en pantalla el mensaje para que se ingrese el segundo número.
    std::cin >> numero2; //Se almacena en la variable "numero2"
    
    float suma = numero1 + numero2; //Suma entre las 2 variables
    float resta = numero1 - numero2; //Resta entre las 2 variables
    float multiplicacion = numero1 * numero2; //Multiplicación entre las 2 variables
    float division = numero1 / numero2; //División entre las 2 variables
    
    std::cout << "La suma es: " << suma << std::endl; //Se imprime el resultado de la variable "suma"
    std::cout << "La resta es: " << resta << std::endl; //Se imprime el resultado de la variable "resta"
    std::cout << "La multiplicación es: " << multiplicacion << std::endl; //Se imprime el resultado de la variable "multiplicacion"
    std::cout << "La división es: " << division << std::endl; //Se imprime el resultado de la variable division"

    return 0;
}