#include <iostream>
#include <string>

int main() {

    std::string str;
    std::cout << "Ingresa una cadena: ";
    std::getline(std::cin, str);


    size_t pos, length;
    std::cout << "Ingresa la posición para la subcadena: ";
    std::cin >> pos;

    std::cout << "Ingresa la longitud para la subcadena: ";
    std::cin >> length;


    if (pos >= str.length() || pos + length > str.length()) {
        std::cerr << "Error: La posición y longitud especificadas están fuera del rango de la cadena." << std::endl;
        return 1; // Salir del programa con un código de error
    }


    std::string sub_str = str.substr(pos, length);


    std::string prefix;
    std::cout << "Ingresa un prefijo para insertar al principio de la cadena: ";
    std::cin.ignore(); // Limpiar el buffer del teclado antes de leer la línea completa
    std::getline(std::cin, prefix);


    std::string new_str = prefix + " " + str;

    
    std::cout << "Subcadena: " << sub_str << std::endl;
    std::cout << "Cadena resultante: " << new_str << std::endl;

    return 0;
}
