#include <iostream>
#include <string>

using namespace std;

int main() {
    string:: frase = "Hola, este es un ejemplo de C++ con la clase string";

    cout << "La frase es: " << frase << endl;

    cout << "Ingresa una nueva frase: ";
    std::string nuevaFrase;
    std::getline(std::cin, nuevaFrase);

    frase += " " + nuevaFrase;

    
}