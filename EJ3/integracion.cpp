#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    std::cout << "Ingresa la primera cadena: ";
    std::getline(std::cin, str1);

    std::cout << "Ingresa la segunda cadena: ";
    std::getline(std::cin, str2);

    std::string str3 = str1 + " " + str2;

    std::cout << "Cadena resultante: " << str3 << std::endl;

    std::cout << "Longitud de la cadena resultante: " << str3.length() << std::endl;
    
    size_t longitudSubcadena = 5;
    std::string subcadena = str3.substr(0, longitudSubcadena);
    std::cout << "Subcadena de longitud " << longitudSubcadena << ": " << subcadena << std::endl;

    return 0;
}

