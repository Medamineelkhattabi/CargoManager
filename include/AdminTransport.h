#ifndef ADMINTRANSPORT_H
#define ADMINTRANSPORT_H

#include "ClientTransport.h"

class AdminTransport : public ClientTransport {
public:
    void ajouterCargaison(std::shared_ptr<Cargaison> cargaison);
    void supprimerMarchandiseCargaison(const std::string& refc, int numeroMarchandise);
    void afficherHistorique() const;
};

#endif
