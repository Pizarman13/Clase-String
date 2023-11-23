#include <iostream>
#include <string>

int main() {

    std::string texto = "Hello, World!, pero ahora en una string";
    std::cout << texto << std::endl;

    std::string sentence = "Ataque a los titanes esta sobrebalorado";
    std::cout << "Tamaño de la cadena: " << sentence.size() << std::endl;
    std::cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;
    std::cout << "Caracter en la posición 0: " << sentence.at(0) << std::endl;

    std::string str1 = "x";
    std::string str2 = "d";
    std::string str3 = " = no se q contestar";
    std::cout << "Cadena resultante: " << str1 + str2 +str3 << std::endl;

    
    
    return 0;
}