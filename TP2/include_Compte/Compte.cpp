#include <iostream>
using namespace std;
#include "Compte.h"

// Constructeur par défaut 
void Compte:: initialisation(){ this->solde = 0;}

void Compte:: depot(float montant){ solde = solde + montant;}

void Compte:: retrait(float montant){ solde = solde - montant;}

void Compte:: affichSolde(){ cout<<solde<<endl; }

float Compte:: getSolde() const { return solde; }

void Compte:: virement(Compte *c, float montant)
{ 
  this->retrait(montant); 
  c->depot(montant);
}


