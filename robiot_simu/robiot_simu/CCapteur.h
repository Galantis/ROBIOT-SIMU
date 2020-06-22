#pragma once

#define SIZE_MAX_X 255
#define SIZE_MAX_Y 255

class CCapteur
{
private:
	int i_size_max_X; //i_size_max_X =55
	int i_size_max_Y; //i_size_max_Y =15 
	char C_Cartographie[SIZE_MAX_X][SIZE_MAX_Y];

public:
	CCapteur(); //Constructeur de CCapteur
	CCapteur(int i_X, int i_Y); //Constructeur de CCapteur
	~CCapteur(); //Destructeur de CBattery
	bool Ouverturefichier_cartographie();	// ouvre le fichier : Cartographie terrain
	bool f_SetCartographie(int i_coordX, int i_coordY, char i_val); //rempli le tableau 
	char c_GetCartographie(int i_coordX, int i_coordY); //Suivant les coordonnees donne, on retourne le caractère (l'objet) du parcours
	int i_retour_size_max_X(); // retourne la valeur 
	int i_retour_size_max_Y();



};

