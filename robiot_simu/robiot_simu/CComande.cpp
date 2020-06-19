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
            for (i_y=0;i_y<i_limite_Y-1;i_y++){
                for (i_x=0;i_x<=i_limite_X-1,i_x++){
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
    int i_limite_X = 0;
    int i_limite_Y = i_retour_size_max_Y();

    int i_x, i_y;
    char c_recupdufichier;
    FILE* fichier = NULL;
    fichier = fopen("Arbre_Cord.txt", "r");

    if (fichier)  // si l'ouverture a réussi
    {
        // instructions
        for (i_y = 0; i_y < i_limite_Y - 1; i_y++) {
            int i_x = 0;
            while (fgetc(fichier) != 'EOF' || fgetc(fichier)=!0x0a) {
                c_recupdufichier = fgetc(fichier); // On lit 1 caractères du fichier, on stocke dans "c_recupdufichier"
                if (i_x<2 && c_recupdufichier!=0x09 )
                f_Get_abres_cordonne(i_x, i_y, c_recupdufichier);
                i_x++;
            }
        }
        fclose(fichier);  // je referme le fichier

    }
    else  // sinon
        cerr << "Erreur à l'ouverture !" << endl;

    return 0;
}

//initaliser le tableau c_catogrpahie
bool CComande ::f_SetCartographie(int i_coordX, int i_coordY, char i_val){
    C_Cartographie[i_coordX][i_coordY]=i_val;
    return 0;
}
//initaliser le tableau i_arbres_cordonne
bool CComande ::f_Get_abres_cordonne(int i_coordX, int i_coordY, char i_val){
    i_Arbres_cordonne[i_coordX][i_coordY]=i_val;
    return 0;
}

//retourne l'objet suivant des coordonées rentrées
char CComande ::c_GetCartographie(int i_coordX, int i_coordY){
    return C_Cartographie[i_coordX][i_coordY];
}
//retourne la longeur max du lieu
int CComande::i_retour_size_max_X(){
    return i_size_max_X;
}

//retourne la largeur max du lieu
int CComande::i_retour_size_max_Y(){
    return i_size_max_Y;
}

