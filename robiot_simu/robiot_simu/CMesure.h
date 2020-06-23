#pragma once
#define TIME 50 //S0 ms temps d'attente de 5 min

class CMesure
{
private:
	int i_StateMesure; // 0 pas de mesure en cours, 1 mesure en cours
	int i_DataMesure; //Value of data measured
public:
	CMesure();//Constructeur de CMesure
	CMesure(int i_St,int i_Dt);//Constructeur de CMesure
	~CMesure();//Destructeur de CMesure
	int i_GetStateMesure();//Retourne la valeur StateMesure
	bool f_SetStateMesure(int i_St);//Met à jour la valeur StateMesure. Retourne vrai si StateMesure a été mise à jour et faux sinon
	int i_GetDataMesure();//Retourne la valeur de DataMesure
	bool f_SetDataMesure(int i_Dt);//Met à jour la valeur de DataMesure. Retourne vrai si DataMesure a été mise à jour et faux sinon
	bool f_DoMesure();//Fait la mesure. Retourne vrai si DoMesure a été effectué la mesure et faux sinon
};

