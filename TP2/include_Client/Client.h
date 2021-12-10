// Client.h
// définition de la classe Client 
// dont les fonctions membres sont définies dans Client.cpp
#include <string>
#include "../include_Compte/Compte.h" // inclus la définition de la class Compte
#include "../include_Date/Date.h" // inclus la définition de la classe date

class Client 
{
public :
  std::string get_prenom() const;
  std::string get_nom() const;
  void saisir_InfoClient();
  void printClient();
  void set_infoClient(std::string nom, std::string prenom);
  void crediter(Client *cl, float montant);
private :
  std::string prenom; 
  std::string nom;
  Date DateNaissance;
  Compte compteClient;
}; // fin classe client
