// g++ -c include_Client/Client.cpp
// g++ -c include_Compte/Compte.cpp
// g++ -c include_Date/Date.cpp
// g++ -c main_statique.cpp
// g++ -o my_program *.o
// ./my_program

#include "./include_Client/Client.h"
#include <iostream>
#include <string>
#define MAX 2
using namespace std;

int main()
{
  
  Client banque[MAX]; // tableau de MAX objets Client
  int i;             
  float wireAmount;

// -------------- Initialisation de la banque -----------
  for(i=0; i<MAX;i++)
    if (i == 0)
    {
      cout << endl;
      cout << "Saisir les informations du premier client : \n";
      banque[i].saisir_InfoClient();
      //cout << endl;
    }
    else
      cout << "Saisir les informations du deuxième client : \n";
      banque[1].saisir_InfoClient();
      //cout << endl;


//---------------------Virement---------------------

  cout << "Saisir le montant à virer : ";
  cin  >> wireAmount;
  cout << endl;
  banque[1].crediter(&banque[0], wireAmount);
   
//---------------- Banque  -----------

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
