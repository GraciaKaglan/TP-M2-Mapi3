// Client.cpp
// définition des fonctions prototypées dans Client.h
#include <iostream>
#include <string>
#include "Client.h"

using namespace std;

string Client::get_prenom() const {return prenom;}
string Client::get_nom()    const {return nom;}

void Client::set_infoClient( string nom, string prenom)
{
  this-> nom = nom;
  this-> prenom = prenom;
}

void Client::saisir_InfoClient()
{
  float balance;
  string nomTemp;
  string prenomTemp;

  cout << "Saisir le nom : ";
  cin  >> nomTemp ;
  cout << "Saisir le prénom : ";
  cin  >> prenomTemp;

  set_infoClient(nomTemp, prenomTemp);

  // Saisir de la date de naissance
  DateNaissance.saisir();

  cout << "Saisir le montant initial : ";
  cin  >> balance;
  compteClient.depot(balance);
  cout << endl;
}

void Client::crediter(Client *cl, float amount)
{
  this->compteClient.virement(&cl->compteClient,amount);
}

void Client::printClient() 
{
  cout << "\n Nom : ";
  cout << get_nom() ;

  cout << "\n Prénom : ";
  cout << get_prenom() ;

  cout << "\n Date de naissance : ";
  this -> DateNaissance.print();
  
  cout << "\n Solde tout compte : ";
  compteClient.affichSolde();
}

