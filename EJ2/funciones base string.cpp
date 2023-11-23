#include <iostream>
#include <string>

int main() {
    std::string sentence = "OpenAI is a leading AI research lab.";

    std::cout << "Tamaño de la cadena: " << sentence.size() << std::endl;

    std::cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;

    std::string palabraBuscada = "AI";
    size_t posicion = sentence.find(palabraBuscada);

    if (posicion != std::string::npos) {
        std::cout << "La palabra '" << palabraBuscada << "' se encuentra en la posición: " << posicion << std::endl;

        std::string subcadena = sentence.substr(posicion, palabraBuscada.size() + 5); // Se añaden 5 caracteres adicionales
        std::cout << "Subcadena después de la palabra encontrada: " << subcadena << std::endl;
    } else {
        std::cout << "La palabra '" << palabraBuscada << "' no se encontró en la cadena." << std::endl;
    }

    return 0;
}

