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

    std::string frase = "El lenguaje C++ es poderoso.";
    std::string sub_str = "C++";
    
    size_t pos = frase.find(sub_str);
    
    if(pos != std::string::npos)
        std::cout << "Subcadena encontrada en la posición: " << pos << std::endl;
    else
        std::cout << "Subcadena no encontrada." << std::endl;
    
    std::string new_sentence = sentence.replace(pos, sub_str.length(), "Python");
    
    std::cout << "Cadena resultante: " << new_sentence << std::endl;

    std::string str = "Inteligencia Artificial";
    std::string subStr = str.substr(13, 9); // "Artificial"
    
    std::string new_str = str.insert(0, "La "); // "La Inteligencia Artificial"
    
    std::cout << "Subcadena: " << subStr << std::endl;
    std::cout << "Cadena resultante: " << new_str << std::endl;
    
    return 0;
}