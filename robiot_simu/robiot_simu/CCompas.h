#pragma once

class CCompas
{
private:
	int i_CoordX; //Coordonn�e X
	int i_CoordY; //Coordonn�e Y
public:
	CCompas();//Constructeur de CMesure
	CCompas(int i_CX, int i_CY);//Constructeur de CMesure
	~CCompas();//Destructeur de CMesure
	int i_GetCoordX();//Retourne la valeur StateMesure
	bool f_SetCoordX(int i_CX);//Met � jour la valeur CoordX. Retourne vrai si CoordX a �t� mise � jour et faux sinon
	int i_GetCoordY();//Retourne la valeur de DataMesure
	bool f_SetCoordY(int i_CY);//Met � jour la valeur de CoordY. Retourne vrai si CoordY a �t� mise � jour et faux sinon
};
