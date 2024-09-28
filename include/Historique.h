#ifndef HISTORIQUE_H
#define HISTORIQUE_H

#include <string>
#include <vector>

class Historique {
private:
    static std::vector<std::string> historique;

public:
    static void ajouterOperation(const std::string& operation);
    static void afficher();
};

#endif
