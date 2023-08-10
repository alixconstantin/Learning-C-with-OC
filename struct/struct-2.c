#include <stdio.h>

// Définition de la structure Date
struct Date {
    int jour;
    int mois;
    int annee;
};

int main() {
    // Initialisation d'une variable de type Date
    struct Date dateDeNaissance;

    // Assignation des valeurs aux champs de la structure
    dateDeNaissance.jour = 15;
    dateDeNaissance.mois = 8;
    dateDeNaissance.annee = 1995;

    // Affichage de la date de naissance
    printf("Date de naissance: %d/%d/%d\n", dateDeNaissance.jour, dateDeNaissance.mois, dateDeNaissance.annee);

    // Utilisation d'une autre manière d'initialiser une structure
    struct Date dateAujourdhui = {7, 8, 2023};
    printf("Date d'aujourd'hui: %d/%d/%d\n", dateAujourdhui.jour, dateAujourdhui.mois, dateAujourdhui.annee);

    return 0;
}

