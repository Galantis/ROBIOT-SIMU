#pragma once
class CCapteur
{
private:

public:
	CCapteur(); //Constructeur de CCapteur
	CCapteur(int i_St, int i_Mes); //Constructeur de CBattery
	~CCapteur(); //Destructeur de CBattery
	int i_GetStateBatterie(); // retourne la valeur StateBattery
	bool f_SetStateBatterie(); // Met à jour la valeur StateBattery. Retourne vrai si StateBattery a été mise à jour et faux sinon
	int i_GetDataBatterie(); // retourne la valeur MesureBattery
	bool f_SetDataBatterie(); //Met à jour la valeur de MesureBattery. Retourne vrai si MesureBattery a été mise à jour et faux sinon
	bool f_GetChargeBatterie(); //Fait la mesure. Retourne vrai si DoMesure a été effectué la mesure et faux sinon
};

