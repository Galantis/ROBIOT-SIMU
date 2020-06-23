#include "pch.h"
#include "CComande.h"
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**************************************************************
* CLASSE : <CCommande>
* PRESENTATION : <Boitier de commande (Fourniture des listes d'arbres à contrôler>
*
* METHODES PUBLIQUES :
* CCommande() : Constructeur de CCommande
* CComande(int i_X, int i_Y) : Constructeur de CCommande
* ~CCommande() : Destructeur de CCommande
* bool CComande::Ouverturefichier_nbr_arbre() : Ouvre le fichier de coordonées des arbres
* bool CComande ::f_Set_abres_cordonne(int i_coordX, int i_coordY, char i_val) : Initialise le tableau de coordonées
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


/**
* METHODE : <CComande>::<Ouverturefichier_nbr_arbre>
* PRESENTATION : <Ouverture du fichier : Arbre_codonne.txt pour recuperer les coodonées des arbres à placé dans le tableau à 2dimensions "i_Arbres_cordonne">
*
 <parametre1> : NULL 
* <parametre_2> : <presentation du parametre 2> 
* <parametre_3> : <presentation du parametre 3> 
* 
* SORTIES : <parametre_4> : <presentation du parametre 4> 
* <parametre_5> : <presentation du parametre 5> 
* <parametre_6> : <presentation du parametre 6>
*
* RETOUR : <0> : <Fonction BOOL return 0> 
* <valeur_2> : <signification> 
* <valeur_3> : <signification> 
* 
* EXCEPTIONS : <exception_1> : cas d'erreur 1 

*
**/
bool CComande::Ouverturefichier_nbr_arbre()
{    
    
    int i_y;
    int i_x = 0;

    char c_recupdufichier;
    FILE* fichier = NULL;
    fichier = fopen("Arbre_Cord.txt", "r");
    cout << "\t" << "Caractere recuperer\t " << fgetc(fichier) << "\ttest" << endl;
    if (fichier != NULL)  // si l'ouverture a réussi
    {
        // instructions      
        while ((fgetc(fichier) != 'EOF')) 
        {
            i_x++;
            for (i_y = 0; i_y < 2; i_y++) 
            {
                c_recupdufichier = fgetc(fichier); // On lit 1 caractères du fichier, on stocke dans "c_recupdufichier"
                
                if (c_recupdufichier == 0x0a || c_recupdufichier == 0x09)
                {
                }
                else {
                    f_Set_abres_cordonne(i_x, i_y, c_recupdufichier);
                }
                
            }
        }
        fclose(fichier);  // je referme le fichier

    }
    else  // sinon
        cerr << "Erreur à l'ouverture !" << endl;
    i_nombres_abres = i_x;
    cout << "\t" << "Boucle while combien de fois " << i_nombres_abres << endl;
    return 0;
}

/**
* METHODE : <CComande>::<f_Set_abres_cordonne>
* PRESENTATION : <initaliser le tableau i_arbres_cordonne>
*
* <i_coordX> : cordonée X du tableau
* <i_coordY> : <cordonée Y du tableau>
* <i_val> : <Valeur de la cordonnée>
* 
*
* RETOUR : <0> : <Fonction BOOL return 0>
* <valeur_2> : <signification>
* <valeur_3> : <signification>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/
bool CComande::f_Set_abres_cordonne(int i_coordX, int i_coordY, char i_val){
    i_Arbres_cordonne[i_coordX][i_coordY]=i_val;
    return 0;
}

/**
* METHODE : <CComande>::<f_Get_abres_cordonne_X>
* PRESENTATION : <recupere le cordonne X de l'arbre>
*
*
* RETOUR : <i_Arbres_cordonne> : <la cordonnée X suivant l'abre choisie>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/

int CComande::f_Get_abres_cordonne_X(){
    return i_Arbres_cordonne[i_actualLigne][0];
}

/**
* METHODE : <CComande>::<f_Get_abres_cordonne_Y>
* PRESENTATION : <recupere le cordonne Y de l'arbre>
*
*
* RETOUR : <i_Arbres_cordonne> : <la cordonnée Y suivant l'abre choisie>>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/
int CComande::f_Get_abres_cordonne_Y(){
    return i_Arbres_cordonne[i_actualLigne][1];
}


/**
* METHODE : <CComande>::<f_setActualLigne>
* PRESENTATION : <passe à l'arbre suivant>
*
* <i_aLigne> : numéro actuel de la ligne
*
* RETOUR : <0> : <Fonction BOOL return 0>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/
bool CComande::f_setActualLigne(int i_aLigne){
    i_actualLigne++;
    return 0;
}

/**
* METHODE : <CComande>::<i_getActualLigne>
* PRESENTATION : < retourne la valeur >
*

*
* RETOUR : <i_actualLigne> : <numéro actuel de la ligne>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/

 int CComande::i_getActualLigne()
 {
     return i_actualLigne;
 }

 /**
* METHODE : <CComande>::<i_nbr_arbre_max>
* PRESENTATION : < retourne la valeur >
*
*
* RETOUR : <i_nombres_abres> : <le nombre max d'arbres à lire>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/
 int CComande::i_nbr_arbre_max(){
     return i_nombres_abres;
 }

