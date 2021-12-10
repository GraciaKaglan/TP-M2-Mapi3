// date.h
// définition de la classe Date

class Date
{
public :
  static const int moisParAn = 12; // nombre de mois dans une année
  void saisir() ; // prompt l'utilisateur à rentrer la date
  void setDate( int day, int month, int year); // fixe la date
  void print() const; // affiche la date au format jour/mois/année
  int get_jour() const; // fonction retournant l'objet jour
  int get_mois() const; // fonction retournant l'objet mois
  int get_an()   const; // fonction l'objet annee
private:
  int mois; // 1-12 (Janvier - Décembre)
  int jour; // 1-31 
  int annee; // année
 
  int checkDay( int testJour ) const; // fonction testant la validité du jour rentrée par l'utilisateur (pour le mois et l'année donnée)

}; // fin de la classe Date