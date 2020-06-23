#include "pch.h"
#include "CComande.h"
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

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


/**
* METHODE : <CComande>::<Ouverturefichier_nbr_arbre>
* PRESENTATION : <Ouverture du fichier : Arbre_codonne.txt pour recuperer les coodon�es des arbres � plac� dans le tableau � 2dimensions "i_Arbres_cordonne">
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
    int i_x = 0;

    int i_recupdufichierX = NULL;
    int i_recupdufichierY = NULL;
    FILE* fichier = NULL;
    fichier = fopen("Arbre_Cord1.txt", "r+");
    if (fichier != NULL)  // si l'ouverture a r�ussi
    {
        //instructions      
        while (!feof(fichier))
        {
            fscanf(fichier, "%d %d", &i_recupdufichierX,&i_recupdufichierY);
            f_Set_abres_cordonne(i_x, 0, i_recupdufichierX);
            f_Set_abres_cordonne(i_x, 1, i_recupdufichierY);

            i_x++;
        }
        fclose(fichier);  // je referme le fichier

    }
    else  // sinon
        cerr << "Erreur � l'ouverture !" << endl;
    i_nombres_abres = i_x;
    cout << "\t" << "Boucle while combien de fois " << i_nombres_abres << endl;
    return 0;
}

/**
* METHODE : <CComande>::<f_Set_abres_cordonne>
* PRESENTATION : <initaliser le tableau i_arbres_cordonne>
*
* <i_coordX> : cordon�e X du tableau
* <i_coordY> : <cordon�e Y du tableau>
* <i_val> : <Valeur de la cordonn�e>
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
* RETOUR : <i_Arbres_cordonne> : <la cordonn�e X suivant l'abre choisie>
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
* RETOUR : <i_Arbres_cordonne> : <la cordonn�e Y suivant l'abre choisie>>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/
int CComande::f_Get_abres_cordonne_Y(){
    return i_Arbres_cordonne[i_actualLigne][1];
}


/**
* METHODE : <CComande>::<f_setActualLigne>
* PRESENTATION : <passe � l'arbre suivant>
*
* <i_aLigne> : num�ro actuel de la ligne
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
* RETOUR : <i_actualLigne> : <num�ro actuel de la ligne>
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
* RETOUR : <i_nombres_abres> : <le nombre max d'arbres � lire>
*
* EXCEPTIONS : <exception_1> : cas d'erreur 1
*
**/
 int CComande::i_nbr_arbre_max(){
     return i_nombres_abres;
 }

