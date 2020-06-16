#pragma once

class CCompas
{
private:
	int i_CoordX; //Coordonnée X
	int i_CoordY; //Coordonnée Y
public:
	CCompas();//Constructeur de CMesure
	CCompas(int i_CX, int i_CY);//Constructeur de CMesure
	~CCompas();//Destructeur de CMesure
	int i_GetCoordX();//Retourne la valeur StateMesure
	bool f_SetCoordX(int i_CX);//Met à jour la valeur CoordX. Retourne vrai si CoordX a été mise à jour et faux sinon
	int i_GetCoordY();//Retourne la valeur de DataMesure
	bool f_SetCoordY(int i_CY);//Met à jour la valeur de CoordY. Retourne vrai si CoordY a été mise à jour et faux sinon
};
