#include <iostream>
#include <string>

int main() {

    std::string sentence = "El lenguaje C++ es poderoso.";


    std::string sub_str_to_find;
    std::cout << "Ingresa la subcadena a buscar: ";
    std::getline(std::cin, sub_str_to_find);


    size_t pos = sentence.find(sub_str_to_find);


    if (pos != std::string::npos) {
        std::cout << "Subcadena encontrada en la posición: " << pos << std::endl;


        std::string sub_str_to_replace;
        std::cout << "Ingresa la subcadena de reemplazo: ";
        std::getline(std::cin, sub_str_to_replace);


        std::string new_sentence = sentence;
        while (pos != std::string::npos) {
            new_sentence.replace(pos, sub_str_to_find.length(), sub_str_to_replace);
            pos = new_sentence.find(sub_str_to_find, pos + sub_str_to_replace.length());
        }


        std::cout << "Cadena resultante: " << new_sentence << std::endl;
    } else {
        std::cout << "Subcadena no encontrada." << std::endl;
    }

    return 0;
}

