#pragma once
class CComande
{
	int I_SIZE_MAX_X, I_SIZE_MAX_Y; //I_Size_Max vaut actuellement 55 et I_SIZE_MAX_Y=15
	
};
	CComande(); //Constructeur de CCapteur
	CComande(int i_X, int i_Y); //Constructeur de CComande
	~CComande(); //Destructeur de CBattery
	int i_GetStateBatterie(); // retourne la valeur StateBattery
	bool f_SetStateBatterie(int i_St); // Met à jour la valeur StateBattery. Retourne vrai si StateBattery a été mise à jour et faux sinon
	int i_GetDataBatterie(); // retourne la valeur MesureBattery
	bool f_SetDataBatterie(); //Met à jour la valeur de MesureBattery. Retourne vrai si MesureBattery a été mise à jour et faux sinon
	bool f_GetChargeBatterie(); //Fait la mesure. Retourne vrai si DoM
