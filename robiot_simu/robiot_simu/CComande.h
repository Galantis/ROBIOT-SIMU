#pragma once

#define SIZE_MAX_X 255
#define SIZE_MAX_Y 255
#define NBR_ARBRE 50

class CComande
{
private:
	int i_size_max_X; //i_size_max_X =55
	int i_size_max_Y; //i_size_max_Y =15 
	char C_Cartographie[SIZE_MAX_X][SIZE_MAX_Y];
	int i_Arbres_cordonne[NBR_ARBRE][2];

public:
	CComande(); //Constructeur de cCCapteur
	CComande(int i_X, int i_Y); //Constructeur de CComande
	~CComande(); //Destructeur de CBattery
	int i_retour_size_max_X();
	int i_retour_size_max_Y();
	bool Ouverturefichier_cartographie();	// ouvre le fichier : Cartographie terrain
	bool Ouverturefichier_nbr_arbre();		// ouvre le fichier : cordonne des arbres 
	bool f_SetCartographie(int i_coordX, int i_coordY, char i_val); //set a val dans le tableau
	char c_GetCartographie(int i_coordX, int i_coordY); // récupère la valeur dans le tableau
	bool c_Get_nbr_arbre_X(int i_coordX, int i_coordY, char i_val); //set a val dans le tableau
	char c_GetCartographie(int i_coordX, int i_coordY); // récupère la valeur dans le tableau
};
