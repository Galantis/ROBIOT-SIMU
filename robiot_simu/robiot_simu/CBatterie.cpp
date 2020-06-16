#include "pch.h"
#include "CBatterie.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
#define TIME 1 //Simul temps d'attente de 1 min
/**************************************************************
* CLASSE : <CBatterie>
* PRESENTATION : <Capteur de niveau de charge de la batterie du Robiot>
*
* METHODES PUBLIQUES : * <Methode1> : <description rapide de la methode 1>
* <Methode2> : <description rapide de la methode 2>
* <Methode3> : <description rapide de la methode 3>
* <Methode4> : <description rapide de la methode 4>
*
* OBSERVATIONS : **************************************************************/

CBatterie::CBatterie() : i_StateBatterie(0), i_DataBatterie(0)
{

}

CBatterie::CBatterie(int i_St, int i_Dt)
{
	i_StateBatterie = i_St;
	i_DataBatterie = i_Dt;
}

CBatterie::~CBatterie()
{
}

int CBatterie::i_GetStateBatterie()
{
	return i_StateBatterie;
}

bool CBatterie::f_SetStateBatterie(int i_St)
{
	i_StateBatterie = i_St;

	if (i_StateBatterie == NULL || i_StateBatterie != i_St)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int CBatterie::i_GetDataBatterie()
{
	return i_DataBatterie;
}

bool CBatterie::f_SetDataBatterie(int i_Dt)
{
	i_DataBatterie = i_Dt;

	if (i_DataBatterie == NULL || i_DataBatterie != i_Dt)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool CBatterie::f_GetChargeBatterie()
{
	int val;

	_sleep(TIME);

	val = rand();

	return f_SetStateBatterie(val);
}

