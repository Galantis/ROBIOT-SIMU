#include "pch.h"
#include "CComande.h"
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

/**************************************************************
* CLASSE : <CCommande>
* PRESENTATION : <Boitier de commande (Fourniture des listes d'arbres � contr�ler>
*
* METHODES PUBLIQUES :
* CCommande() : Constructeur de CCommande
* CComande(int i_X, int i_Y) : Constructeur de CCommande
* ~CCommande() : Destructeur de CCommande
* bool CComande::Ouverturefichier_nbr_arbre() : Ouvre le fichier de coordon�es des arbres
* bool CComande ::f_Set_abres_cordonne(int i_coordX, int i_coordY, char i_val) : Initialise le tableau de coordon�es
* OBSERVATIONS : **************************************************************/


CComande::CComande()
{
    i_actualLigne = 0;
    i_size_max_X = SIZE_MAX_X;
    i_size_max_Y = SIZE_MAX_X;
    i_nombres_abres = 0;
}

CComande::CComande(int i_X, int i_Y)
{
    i_actualLigne = 0;
    i_size_max_X = i_X;
    i_size_max_Y = i_Y;
}

CComande::~CComande()
{
}

bool CComande::Ouverturefichier_nbr_arbre()
{    
    
    int i_y;
    char c_recupdufichier;
    FILE* fichier = NULL;
    fichier = fopen("Arbre_Cord.txt", "r");

    if (fichier)  // si l'ouverture a r�ussi
    {
        // instructions
        for (i_y = 0; i_y < 2; i_y++) {
            int i_x = 0;
            i_nombres_abres++;
            while ((fgetc(fichier) != 'EOF') || (fgetc(fichier) != 0x0a)) {
                c_recupdufichier = fgetc(fichier); // On lit 1 caract�res du fichier, on stocke dans "c_recupdufichier"
                if (i_x<2 && c_recupdufichier!=0x09 )
                f_Set_abres_cordonne(i_x, i_y, c_recupdufichier);
                i_x++;
            }
        }
        fclose(fichier);  // je referme le fichier

    }
    else  // sinon
        cerr << "Erreur � l'ouverture !" << endl;

    return 0;
}

//initaliser le tableau i_arbres_cordonne
bool CComande::f_Set_abres_cordonne(int i_coordX, int i_coordY, char i_val){
    i_Arbres_cordonne[i_coordX][i_coordY]=i_val;
    return 0;
}

//recupere le cordonne X de l'arbre
int CComande::f_Get_abres_cordonne_X(){
    return i_Arbres_cordonne[i_actualLigne][0];
}

//recupere le cordonne Y de l'arbre
int CComande::f_Get_abres_cordonne_Y(){
    return i_Arbres_cordonne[i_actualLigne][1];
}
//passe � l'arbre suivant
bool CComande::f_setActualLigne(int i_aLigne){
    i_actualLigne++;
    return 0;
}
// retourne la valeur 
 int CComande::i_getActualLigne()
 {
     return i_actualLigne;
 }

 int CComande::i_nbr_arbre_max(){
     return i_nombres_abres;
 }

