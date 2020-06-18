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
* METHODES PUBLIQUES : * <Ouverture du fichier > : <description rapide de la methode 1>
* <Methode2> : <description rapide de la methode 2>
* <Methode3> : <description rapide de la methode 3>
* <Methode4> : <description rapide de la methode 4>
*
* OBSERVATIONS : **************************************************************/

CComande::CComande() : i_size_max_X(0), i_size_max_Y(0)
{

}

CComande::CComande(int i_X, int i_Y)
{
    i_size_max_X = i_X;
    i_size_max_Y = i_Y;
 };
  

CComande::~CComande()
{
}


    bool CComande::Ouverturefichier_cartographie()
{
    //recuperation des limites de la cartographie
    int i_limite_X = i_retour_size_max_X();
    int i_limite_Y = i_retour_size_max_Y();

    int i_x, i_y;
    char c_recupdufichier;
    FILE* fichier = NULL;
    fichier = fopen("Carto.txt", "r");
     
 
     if(fichier)  // si l'ouverture a réussi
     {
          // instructions
            for (i_y=0;i<i_limite_Y-1;i_y++){
                for (i_x=0;i<=i_limite_X-1,i_x++){
                    c_recupdufichier=fgetc(fichier); // On lit 1 caractères du fichier, on stocke dans "c_recupdufichier"
                    f_SetCartographie(i_x, i_y, c_recupdufichier);
				}
			}
            fclose(fichier);  // je referme le fichier

     }
     else  // sinon
            cerr << "Erreur à l'ouverture !" << endl;
 
     return 0;
}

    bool CComande::Ouverturefichier_nbr_arbre()
{
    //recuperation des limites de la cartographie
    int i_limite_X = 2
    int i_limite_Y = i_retour_size_max_Y();

    int i_x, i_y;
    char c_recupdufichier;
    FILE* fichier = NULL;
    fichier = fopen("Carto.txt", "r");
     
 
     if(fichier)  // si l'ouverture a réussi
     {
          // instructions
            for (i_y=0;i<i_limite_Y-1;i_y++){
                for (i_x=0;i<=i_limite_X-1,i_x++){
                    c_recupdufichier=fgetc(fichier); // On lit 1 caractères du fichier, on stocke dans "c_recupdufichier"
                    f_SetCartographie(i_x, i_y, c_recupdufichier);
				}
			}
            fclose(fichier);  // je referme le fichier

     }
     else  // sinon
            cerr << "Erreur à l'ouverture !" << endl;
 
     return 0;
}


bool CComande ::f_SetCartographie(int i_coordX, int i_coordY, char i_val){
    C_Cartographie[i_coordX][i_coordY]=i_val;
    return 0;
}

char CComande ::c_GetCartographie(int i_coordX, int i_coordY){
    return C_Cartographie[i_coordX][i_coordY];
}

int CComande::i_retour_size_max_X(){
    return i_size_max_X;
}


int CComande::i_retour_size_max_Y(){
    return i_size_max_Y;
}

