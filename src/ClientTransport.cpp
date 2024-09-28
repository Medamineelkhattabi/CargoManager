#include "ClientTransport.h"
#include <algorithm>

ClientTransport::ClientTransport() {}

ClientTransport::ClientTransport(const std::vector<std::shared_ptr<Cargaison>>& cargaisons)
    : cargaisons(cargaisons) {}

std::vector<std::shared_ptr<Cargaison>>& ClientTransport::getCargaisons() {
    return cargaisons;
}

void ClientTransport::afficherToutesCargaisons() const {
    for (const auto& cargaison : cargaisons) {
        cargaison->afficher();
    }
}

double ClientTransport::calculerCoutTotalTransport() const {
    double total = 0;
    for (const auto& cargaison : cargaisons) {
        total += cargaison->calculerCoutTransport();
    }
    return total;
}

void ClientTransport::trierCargaisonsParCoutTransport() {
    std::sort(cargaisons.begin(), cargaisons.end(),
        [](const std::shared_ptr<Cargaison>& a, const std::shared_ptr<Cargaison>& b) {
            return a->calculerCoutTransport() < b->calculerCoutTransport();
        });
}
