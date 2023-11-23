#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long sentence;

    string:: sentence = "Hola, este es un ejemplo de C++ con la clase string";

    cout << "La frase es: " << sentence << endl;

    cout << "Ingresa una nueva frase: ";
    std::string nuevaFrase;
    std::getline(std::cin, nuevaFrase);

    sentence += " " + nuevaFrase;

    std:: cout << "La frase actualizada es: " << sentence << endl;

    return 0;
}