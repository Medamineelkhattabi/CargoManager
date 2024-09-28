#include "Cargaison.h"
#include <iostream>

Cargaison::Cargaison(const std::string& refc, float distance)
    : refc(refc), distance(distance) {}

std::string Cargaison::getRefc() const {
    return refc;
}

float Cargaison::getDistance() const {
    return distance;
}

double Cargaison::calculerPoidsTotal() const {
    double poidsTotal = 0;
    for (const auto& marchandise : marchandises) {
        poidsTotal += marchandise->getPoids();
    }
    return poidsTotal;
}

void Cargaison::ajouterMarchandise(std::shared_ptr<Marchandise> marchandise) {
    marchandises.push_back(marchandise);
}

void Cargaison::afficher() const {
    std::cout << "Cargaison " << refc << " - Distance: " << distance << std::endl;
    for (const auto& marchandise : marchandises) {
        marchandise->afficher();
    }
}

// CargaisonRoutiere
double CargaisonRoutiere::calculerCoutTransport() const {
    if (calculerPoidsTotal() < 380000) {
        return 4 * getDistance() * calculerPoidsTotal();
    } else {
        return 6 * getDistance() * calculerPoidsTotal();
    }
}

// CargaisonAerienne
double CargaisonAerienne::calculerCoutTransport() const {
    if (calculerPoidsTotal() < 80000) {
        return 10 * getDistance() * calculerPoidsTotal();
    } else {
        return 12 * getDistance() * calculerPoidsTotal();
    }
}
