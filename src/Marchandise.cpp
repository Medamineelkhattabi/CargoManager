#include "Marchandise.h"
#include <iostream>

Marchandise::Marchandise(int numero, float poids, double volume)
    : numero(numero), poids(poids), volume(volume) {}

int Marchandise::getNumero() const {
    return numero;
}

float Marchandise::getPoids() const {
    return poids;
}

double Marchandise::getVolume() const {
    return volume;
}

void Marchandise::afficher() const {
    std::cout << "Marchandise " << numero << " - Poids: " << poids << " - Volume: " << volume << std::endl;
}

// Implémentation pour MarchandiseFragile
MarchandiseFragile::MarchandiseFragile(int numero, float poids, double volume, bool fragile)
    : Marchandise(numero, poids, volume), fragile(fragile) {}

double MarchandiseFragile::calculerCoutSupplementaire() const {
    return fragile ? 200.0 : 0.0;
}

void MarchandiseFragile::afficher() const {
    Marchandise::afficher();
    std::cout << " - Fragile: " << (fragile ? "Oui" : "Non") << std::endl;
}
