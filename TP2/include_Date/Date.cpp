// Date.cpp
// définition des fonctions membres de la class Date
#include <iostream>
#include <stdexcept>
#include "Date.h" // inclus la définition de la classe Date
using namespace std;

// fonction fixant la date et
// assurant que la date est valable
void Date::setDate( int day, int month, int year)
{
  if (month > 0 &&  month <= moisParAn) // valide le mois
    mois = month;
  else 
    throw invalid_argument("Le mois dois être compris entre 1 et 12 ");

  annee = year;
  jour  = checkDay(day); // valide le jour
}

// prompte l'utilisateur à rentrer la date
void Date::saisir() 
{
  char c; //contiendra le caractère de séparation "/"
  int Jtemp;
  int Mtemp;
  int Atemp;
  cout << "Entrez la date au format jj/mm/aaaa : ";
  cin  >> Jtemp >> c >> Mtemp >> c >> Atemp;
  setDate(Jtemp,Mtemp,Atemp);
}

// affiche la date au format jj/mm/an
void Date::print() const
{
  cout << jour << '/'
       << mois << '/'
       << annee; 
} // fin de la fonction print

// fonction testant la validité de la valeur jour 
// selon le mois et l'année donnés
int Date::checkDay(int testJour) const
{
  static const int JourParMois[moisParAn+1] =
  {0,31,28,31,30,31,30,31,31,30,31,30,31};

  // détermine si testJour est valide pour le mois spécifié
  if (testJour > 0 && testJour <= JourParMois[ mois ] )
    return testJour;

  // test février 29
  if( mois == 2  && testJour == 29 
                 && (annee%400 == 0 || 
                    (annee % 4 == 0 &&
                     annee %100 !=0))
    )
    return testJour;
  
  throw invalid_argument( "Jour invalide pour le mois et l'année spécifiés");
} // fin de la fonction checkDay

//fonctions retournant les objets jour, mois, année 
int Date::get_jour() const{return jour;} 
int Date::get_mois() const{return mois;} 
int Date::get_an() const{return annee;} 