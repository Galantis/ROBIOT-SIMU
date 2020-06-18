#pragma once

class CBatterie
{
private:	
	int i_StateBatterie;
	int i_DataBatterie;
public:
	CBatterie(); //Constructeur de CBattery
	CBatterie(int i_St, int i_Dt); //Constructeur de CBattery
	~CBatterie(); //Destructeur de CBattery
	int i_GetStateBatterie(); // retourne la valeur StateBattery
	bool f_SetStateBatterie(int i_St); // Met à jour la valeur StateBattery. Retourne vrai si StateBattery a été mise à jour et faux sinon
	int i_GetDataBatterie(); // retourne la valeur MesureBattery
	bool f_SetDataBatterie(int i_Dt); //Met à jour la valeur de MesureBattery. Retourne vrai si MesureBattery a été mise à jour et faux sinon
	bool f_GetChargeBatterie(); //Fait la mesure. Retourne vrai si DoMesure a été effectué la mesure et faux sinon
};