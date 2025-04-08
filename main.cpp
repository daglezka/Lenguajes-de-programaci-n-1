#include <iostream> //Librerías básicas para entrada y salida de datos

int main()
{
    int edad; // Se declara una variable de tipo entero para almacenar la edad que ingresa el usuario
    std::cout<<"Ingrese su edad: "; //Muestra en consola el enunciado "Ingrese su edad"
    std::cin>> edad; //Almacena el dato ingresado por el usuario en la variable "edad"
    
    
         if (edad >= 18) //Si el dato cumple o no con la condición, se determina si es mayor o menor de edad
         {
             std::cout << "Usted es mayor de edad"<< std::endl; //muestra en pantalla el mensaje "Usted es mayor de edad"
         }
         else
         {
             std::cout << "Usted es menor de edad"<< std::endl; //Muestra en pantalla el mensaje "Usted es menor de edad"
         }
         
    return 0; //Se utiliza al final de la función main para indicar que el programa finalizó correctamente
}
