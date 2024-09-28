#ifndef CARGAISON_H
#define CARGAISON_H

#include <vector>
#include <memory>
#include "Marchandise.h"

class Cargaison {
protected:
    std::string refc;
    float distance;
    std::vector<std::shared_ptr<Marchandise>> marchandises;

public:
    Cargaison(const std::string& refc, float distance);
    std::string getRefc() const;
    float getDistance() const;
    virtual double calculerPoidsTotal() const;
    virtual double calculerCoutTransport() const = 0;
    void ajouterMarchandise(std::shared_ptr<Marchandise> marchandise);
    void supprimerMarchandise(int numero);
    void afficher() const;
};

class CargaisonRoutiere : public Cargaison {
public:
    using Cargaison::Cargaison;
    double calculerCoutTransport() const override;
};

class CargaisonAerienne : public Cargaison {
public:
    using Cargaison::Cargaison;
    double calculerCoutTransport() const override;
};

#endif
