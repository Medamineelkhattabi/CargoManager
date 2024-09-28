#ifndef MARCHANDISE_H
#define MARCHANDISE_H

class Marchandise {
private:
    int numero;
    float poids;
    double volume;

public:
    Marchandise(int numero, float poids, double volume);
    int getNumero() const;
    float getPoids() const;
    double getVolume() const;
    virtual void afficher() const;
    virtual double calculerCoutSupplementaire() const { return 0; }
};

class MarchandiseFragile : public Marchandise {
private:
    bool fragile;

public:
    MarchandiseFragile(int numero, float poids, double volume, bool fragile);
    double calculerCoutSupplementaire() const override;
    void afficher() const override;
};

#endif
