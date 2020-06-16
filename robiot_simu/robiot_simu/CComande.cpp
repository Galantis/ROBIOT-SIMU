#include "pch.h"
#include "CComande.h"
#include <fstream>
using namespace std;

/**************************************************************
* CLASSE : <CCommande>
* PRESENTATION : <Boitier de commande (Fourniture des listes d'arbres à contrôler>
*
* METHODES PUBLIQUES : * <Ouverture du fichier > : <description rapide de la methode 1>
* <Methode2> : <description rapide de la methode 2>
* <Methode3> : <description rapide de la methode 3>
* <Methode4> : <description rapide de la methode 4>
*
* OBSERVATIONS : **************************************************************/

CComande::CComande() : i_StateBatterie(0), i_DataBatterie(0)
{

}

CComande::CComande(int i_St, int i_Dt)
{
	char C_Cartographie[I_SIZE_MAX_X][Y_SIZE_MAX_Y];
}

CBatterie::~CBatterie()
{
}


void Ccommande::Ouverturefichier()
{
	 string mon_fichier = "test.txt";  // je stocke dans la chaîne mon_fichier le nom du fichier à ouvrir
     ifstream fichier(mon_fichier.c_str(), ios::in);
     if(fichier)  // si l'ouverture a réussi
     {
          // instructions
            fichier.close();  // je referme le fichier
     }
     else  // sinon
            cerr << "Erreur à l'ouverture !" << endl;
 
     return 0;
}