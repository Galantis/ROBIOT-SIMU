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
	int i_nombres_abres;
	int i_actualLigne;
public:
	CComande(); //Constructeur de cCCapteur
	CComande(int i_X, int i_Y); //Constructeur de CComande
	~CComande(); //Destructeur de CBattery
	int i_retour_size_max_X();
	int i_retour_size_max_Y();
	bool Ouverturefichier_cartographie();	// ouvre le fichier : Cartographie terrain
	bool Ouverturefichier_nbr_arbre();		// ouvre le fichier : cordonne des arbres 
	bool f_SetCartographie(int i_coordX, int i_coordY, char i_val); //rempli le tableau 
	bool f_Set_abres_cordonne(int i_coordX, int i_coordY, char i_val); //rempli le tableau 
	char c_GetCartographie(int i_coordX, int i_coordY); //Suivant les coordonnees donne, on retourne le caractère (l'objet) du parcours
	bool f_Get_abres_cordonne(int i_coordX, int i_coordY, char i_val); //
	char c_GetCartographie(int i_coordX, int i_coordY); // 
	bool f_setActualLigne(int i_aLigne);
	int i_getActualLigne();
};
