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
	bool f_SetStateBatterie(int i_St); // Met � jour la valeur StateBattery. Retourne vrai si StateBattery a �t� mise � jour et faux sinon
	int i_GetDataBatterie(); // retourne la valeur DataBattery
	bool f_SetDataBatterie(int i_Dt); //Met � jour la valeur de DataBattery. Retourne vrai si DataBattery a �t� mise � jour et faux sinon
};