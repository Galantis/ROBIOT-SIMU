#pragma once

#define SIZE_MAX_X 255
#define SIZE_MAX_Y 255
#define NBR_ARBRE 50

class CComande
{
private:
	int i_size_max_X; //i_size_max_X =55
	int i_size_max_Y; //i_size_max_Y =15 
	
	int i_Arbres_cordonne[NBR_ARBRE][2];
	int i_nombres_abres;
	int i_actualLigne;
public:
	CComande(); //Constructeur de cCCapteur
	CComande(int i_X, int i_Y); //Constructeur de CComande
	~CComande(); //Destructeur de CBattery
	bool Ouverturefichier_nbr_arbre();		// ouvre le fichier : cordonne des arbres 
	bool f_Set_abres_cordonne(int i_coordX, int i_coordY, char i_val); //rempli le tableau 
	int f_Get_abres_cordonne_X(); //retourn le cordonne X d'un arbre'
	int f_Get_abres_cordonne_Y(); //retourn le cordonne Y d'un arbre'
	bool f_setActualLigne(int i_aLigne); //incremente le nombre de ligne
	int i_getActualLigne();//return value of acutal ligne
	int i_nbr_arbre_max();//return le nombre d'arbre max'
};
