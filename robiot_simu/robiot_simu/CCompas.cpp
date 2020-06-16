#include "pch.h"
#include "CCompas.h"
/**************************************************************
* CLASSE : <CCompas>
* PRESENTATION : <description de la classe et de sa fonction>
*
* METHODES PUBLIQUES : * <Methode1> : <description rapide de la methode 1>
* <Methode2> : <description rapide de la methode 2>
* <Methode3> : <description rapide de la methode 3>
* <Methode4> : <description rapide de la methode 4>
*
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
