#include "AdminTransport.h"
#include "Historique.h"
#include <iostream>

void AdminTransport::ajouterCargaison(std::shared_ptr<Cargaison> cargaison) {
    cargaisons.push_back(cargaison);
    Historique::ajouterOperation("Ajout de cargaison " + cargaison->getRefc());
}

void AdminTransport::supprimerMarchandiseCargaison(const std::string& refc, int numeroMarchandise) {
    for (auto& cargaison : cargaisons) {
        if (cargaison->getRefc() == refc) {
            cargaison->supprimerMarchandise(numeroMarchandise);
            Historique::ajouterOperation("Suppression de marchandise " + std::to_string(numeroMarchandise) + " de la cargaison " + refc);
            break;
        }
    }
}

void AdminTransport::afficherHistorique() const {
    Historique::afficher();
}
