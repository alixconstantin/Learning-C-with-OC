#ifndef PERSONNE_H
#define PERSONNE_H

// Structure pour représenter une personne
typedef struct Personne
{
    char nom[100];      // Nom de la personne
    char prenom[100];   // Prénom de la personne
    char adresse[1000]; // Adresse de la personne
    
    int age;            // Âge de la personne
    int etudiant;       // Booléen : 1 si la personne est étudiante, 0 sinon
} Personne;

#endif // PERSONNE_H
