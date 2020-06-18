#include "pch.h"
#include "CMoteur.h"

/**************************************************************
* CLASSE : <CMoteur>
* PRESENTATION : <Pilote le couple du moteur du châssis>
*
* METHODES PUBLIQUES : * <Methode1> : <description rapide de la methode 1>
* <Methode2> : <description rapide de la methode 2>
* <Methode3> : <description rapide de la methode 3>
* <Methode4> : <description rapide de la methode 4>
*
* OBSERVATIONS : **************************************************************/

CMoteur::CMoteur(int i_DataX,int i_DataY, bool Instruc_Move)
{
	i_X=i_DataX;
	i_Y=i_DataY;
	Move=Instruc_Move;
}

bool CMoteur::f_Move(int X,int Y, char XorY, bool Forward);
{
	
	if Forward = True
	{
		if (XorY = "x")
		{
			x++;
		}
		if (XorY = "y")
		{
			y++;
		}
	}
	else
	{
		if (XorY = "x")
		{
			x--;
		}
		if (XorY = "y")
		{
			y--;
		}
	}
	return true;
}