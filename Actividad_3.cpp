/******************************************************************************

Autor: Daniel Quezada
Actividad #3
Calcular RFC en C++
16/04/2025

*******************************************************************************/
#include <iostream>//Biblioteca estándar para entradas y salidas en C++
#include <string>//Biblioteca para la manipulación de cadenas (std::string)

//Función para obteber la primera vocal interna del apellido paterno
char ObtenerPrimeraVocalInterna(const std::string& str) {
    //Recorremos la cadena desde el segundo caracter (indice 1) gasta el final
    for (size_t i=1; i < str.length(); ++i) {
        char c = str[i]; //Se obtiene el caracter actual de la cadena
        
        //Se verifica si el caracter es una vocal mayúscula
        if(c == 'A' || c == 'E' || c== 'I' || c=='O' || c== 'U')
        
             return c; //Regresa la primera vocal interna encontrada
    }
    return 'X'; //Si no se encuentra ninguna vocal interna, se devuelve una "X"
}

// Función para calcular el RFC con base en los datos personales
std::string CalcularRFC(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& fechaNacimiento) {
    std::string rfc; //Variable para almacenar RFC resultante
    
    //Se obtiene la primera letra del apellido paterno
    char letrainicial = apellidoPaterno[0];
    
    //Se obtiene la primera vocal interna del apellido paterno
    char PrimeraVocalInterna = ObtenerPrimeraVocalInterna(apellidoPaterno);
    
    //Se obtiene la inicial del apellido materno, si no existe se usa una "X"
    char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'X';
    
    //Se obtiene la inicial del nombre
    char inicialNombre = nombre[0];
    
    //Se obtienen los últimos dos dígitos del año de nacimiento (posición 2 y 3)
    std::string anio = fechaNacimiento.substr(2,2);
    
    //Se obtiene el mes de nacimiento (posición 5 y 6)
    std::string mes = fechaNacimiento.substr(5,2);
    
    //Se obtiene el día de nacimiento (posiciones 8 y 9)
    std::string dia = fechaNacimiento.substr(8,2);
    
    // Se construye el RFC concatenando los valores obtenidos
    rfc = letrainicial;
    rfc += PrimeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inicialNombre;
    rfc += anio;
    rfc += mes;
    rfc += dia;
    
    return rfc; //Se regresa el RFC generado
    
}

int main()
{
  std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
  
  //Se solicita el nombre del usuario
  std::cout << "Ingrese el nombre: ";
  std::getline(std::cin, nombre); //Captura toda la línea del nombre
  
  //Se solicita el apellido paterno
  std::cout <<"Ingrese el apellido paterno :";
  std::getline(std::cin, apellidoPaterno);
  
  //Se solicita el apellido materno, permitiendo que el usuario deje vacío
  std::cout <<"Ingrese el apellido materno, si no tiene presione tecla Enter: ";
  std::getline(std::cin, apellidoMaterno);
  
  //Se solicita la fecha de nacimiento en formato YYYY-MM-DD
  std::cout <<"Ingrese la fecha de nacimiento en formato (YYYY-MM-DD): ";
  std::getline(std::cin, fechaNacimiento);
  
  //Se calcula el RFC utilizando la función CalcularRFC
  std::string rfc = CalcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
  
  // Antes de mostrar el RFC, se hace una validación por posible mala palabra
    std::string primerasLetras = rfc.substr(0, 4); // Extraemos las primeras 4 letras
    std::string malasPalabras[] = {"PENE", "CACA", "PUTO", "MAME", "LOCO"}; // Diccionario de malas palabras (se pueden agregar las necesarias)

    for (const std::string& mala : malasPalabras) {
        if (primerasLetras == mala) {
            rfc[1] = 'X'; // Sustituimos la segunda letra por 'X'
            
        break;
        }
}
  //Se muestra el RFC generado
  std::cout << "RFC: " << rfc << std::endl;
  

    return 0; //Finaliza el programa
}