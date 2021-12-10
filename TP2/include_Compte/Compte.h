class Compte 
{
public :
	void initialisation();
	void depot(float montant);
	void retrait(float montant);
	void affichSolde();
	float getSolde() const;
	void virement(Compte *c, float montant);
private :
  float solde;
};
