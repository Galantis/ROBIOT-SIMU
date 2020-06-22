#include "pch.h"
#include "CCapteur.h"
#include "CComande.h"

/**************************************************************
* CLASSE : <CCapteur>
* PRESENTATION : <Capteur de signaux balise (bordures de terrain, obstacles, arbres)>
*
* METHODES PUBLIQUES : * <Methode1> : <description rapide de la methode 1>
* CCapteur() : Constructeur de CCapteur
* CCapteur(int i_X, int i_Y) : Constructeur de CCapteur
* ~CCapteur() : Destructeur de CCapteur
*
* OBSERVATIONS : **************************************************************/


CCapteur::CCapteur() : i_size_max_X(0), i_size_max_Y(0)
{
}

CCapteur::CCapteur(int i_X, int i_Y)
{
    i_size_max_X = i_X;
    i_size_max_Y = i_Y;
 };
  

CCapteur::~CCapteur()
{
}

bool CCapteur::Ouverturefichier_cartographie()
{
    //recuperation des limites de la cartographie
    int i_limite_X = i_retour_size_max_X();
    int i_limite_Y = i_retour_size_max_Y();

    int i_x, i_y;
    char c_recupdufichier;
    FILE* fichier = NULL;
    fichier = fopen("Cartographie_Terrain.txt", "r");
     
    if(fichier)  // si l'ouverture a réussi
    {
        // instructions
        for (i_y = 0; i_y < i_limite_Y - 1; i_y++)
        {
            for (i_x = 0; i_x <= i_limite_X - 1; i_x++)
            {
                c_recupdufichier=fgetc(fichier); // On lit 1 caractères du fichier, on stocke dans "c_recupdufichier"
                f_SetCartographie(i_x, i_y, c_recupdufichier);
	        }
        }
        fclose(fichier);  // je referme le fichier

    }
    else  // sinon
    {
        cerr << "Erreur à l'ouverture !" << endl;
    }
 
     return 0;
}


//initaliser le tableau c_catogrpahie
bool CCapteur::f_SetCartographie(int i_coordX, int i_coordY, char i_val){
    C_Cartographie[i_coordX][i_coordY]=i_val;
    return 0;
}

//retourne l'objet suivant des coordonées rentrées
char CCapteur::c_GetCartographie(int i_coordX, int i_coordY){
    return C_Cartographie[i_coordX][i_coordY];
}

//retourne la longeur max du lieu
int CCapteur::i_retour_size_max_X(){
    return i_size_max_X;
}

//retourne la largeur max du lieu
int CCapteur::i_retour_size_max_Y(){
    return i_size_max_Y;
}