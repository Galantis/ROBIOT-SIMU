#include "pch.h"
#include "CCompas.h"
/**************************************************************
* CLASSE : <CCompas>
* PRESENTATION : <description de la classe et de sa fonction>
*
* METHODES PUBLIQUES : 
* CCompas() : Constructeur de CCompas
* CCompas(int i_CX, int i_CY) : Constructeur de CCompas
* ~CCompas() : Destructeur de CCompas
* int i_GetCoordX() : Retourne la valeur CoordX
* bool f_SetCoordX(int i_CX) : Met à jour la valeur CoordX. Retourne vrai si CoordX a été mise à jour et faux sinon
* int i_GetCoordY() : Retourne la valeur de CoordY
* bool f_SetCoordY(int i_CY) : Met à jour la valeur de CoordY. Retourne vrai si CoordY a été mise à jour et faux sinon
* OBSERVATIONS : **************************************************************/

CCompas::CCompas() : i_CoordX(0), i_CoordY(0)
{
}

CCompas::CCompas(int i_CX, int i_CY)
{
	i_CoordX = i_CX;
	i_CoordY = i_CY;
}

CCompas::~CCompas()
{
}

int CCompas::i_GetCoordX()
{
	return i_CoordX;
}

bool CCompas::f_SetCoordX(int i_CX)
{
	i_CoordX = i_CX;

	if (i_CoordX == NULL || i_CoordX != i_CX)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int CCompas::i_GetCoordY()
{
	return i_CoordY;
}

bool CCompas::f_SetCoordY(int i_CY)
{
	i_CoordY = i_CY;

	if (i_CoordY == NULL || i_CoordY != i_CY)
	{
		return false;
	}
	else
	{
		return true;
	}
}
