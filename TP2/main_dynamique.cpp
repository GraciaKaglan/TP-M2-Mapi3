// g++ -c include_Client/Client.cpp
// g++ -c include_Compte/Compte.cpp
// g++ -c include_Date/Date.cpp
// g++ -c main_dynamique.cpp
// g++ -o my_program *.o
// ./my_program

#include "./include_Client/Client.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
  
  Client *banque; // tableau de arraysize objets Client
  int arraysize;
  int i;             
  float wireAmount;

  cout << "\n";
  cout << "Entrer la taille du tableau de clients: ";
  cin  >> arraysize;

  banque = new Client[arraysize];


// -------------- Initialisation de la banque -----------
  for(i=0; i<arraysize;i++)
    switch(i)
    {
      case 0:
        cout << endl;
        cout << "Saisir les informations du premier client : \n";
        banque[i].saisir_InfoClient();
        break;

      case 1:
        cout << "Saisir les informations du deuxième client : \n";
        banque[1].saisir_InfoClient();
    }


//----------------Virement-------------

  cout << "Saisir le montant à virer : ";
  cin  >> wireAmount;
  cout << endl;
  banque[1].crediter(&banque[0], wireAmount);
   
//--------------------------- Banque  ------------------------

  cout << "*****************************************\n";
  cout << "                   Banque                \n";
  cout << "*****************************************\n";

  cout << "-----------------------------\n";
  cout << "         Premier client      \n";
  cout << "-----------------------------";
  banque[0].printClient();
  cout << endl;
  
  cout << "-----------------------------\n";
  cout << "         Second client       \n";
  cout << "-----------------------------";
  banque[1].printClient();
  cout << endl;

} // end main 
