#include "Marchandise.h"
#include "Cargaison.h"
#include "ClientTransport.h"
#include "AdminTransport.h"
#include "Historique.h"

int main() {
    AdminTransport admin;

    // Ajout des cargaisons
    admin.ajouterCargaison(make_shared<CargaisonRoutiere>("CR1", 100.0));
    admin.ajouterCargaison(make_shared<CargaisonAerienne>("CA1", 200.0));

    // Ajout de marchandises
    admin.ajouterMarchandise("CR1", make_shared<Marchandise>(1, 100.0, 50.0));
    admin.ajouterMarchandise("CA1", make_shared<MarchandiseFragile>(2, 80.0, 30.0, true));

    // Affichage des informations
    admin.afficherCargaison("CR1");
    admin.afficherCargaison("CA1");

    // Suppression d'une marchandise
    admin.supprimerMarchandiseCargaison("CR1", 1);

    // Historique des opérations
    admin.afficherHistorique();

    return 0;
}
