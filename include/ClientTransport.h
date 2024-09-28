#ifndef CLIENTTRANSPORT_H
#define CLIENTTRANSPORT_H

#include "Cargaison.h"
#include <vector>
#include <memory>

class ClientTransport {
protected:
    std::vector<std::shared_ptr<Cargaison>> cargaisons;

public:
    ClientTransport();
    ClientTransport(const std::vector<std::shared_ptr<Cargaison>>& cargaisons);
    std::vector<std::shared_ptr<Cargaison>>& getCargaisons();
    void afficherToutesCargaisons() const;
    double calculerCoutTotalTransport() const;
    void trierCargaisonsParCoutTransport();
};

#endif
