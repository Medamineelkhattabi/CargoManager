#include "Historique.h"
#include <iostream>

std::vector<std::string> Historique::historique;

void Historique::ajouterOperation(const std::string& operation) {
    historique.push_back(operation);
}

void Historique::afficher() {
    std::cout << "Historique des opérations : " << std::endl;
    for (const auto& operation : historique) {
        std::cout << "- " << operation << std::endl;
    }
}
