#include "pch.h"
#include "CMesure.h"
#include <chrono>
#include <windows.h>
#include <cstdlib>
#include <iostream>
/**************************************************************
* CLASSE : <CMesure>
* PRESENTATION : <description de la classe et de sa fonction>
*
* METHODES PUBLIQUES : * <Methode1> : <description rapide de la methode 1>
* <Methode2> : <description rapide de la methode 2>
* <Methode3> : <description rapide de la methode 3>
* <Methode4> : <description rapide de la methode 4>
*
* OBSERVATIONS : **************************************************************/

CMesure::CMesure() : i_StateMesure(0), i_DataMesure(0)
{

}

CMesure::CMesure(int i_St, int i_Dt)
{
	i_StateMesure = i_St;
	i_DataMesure = i_Dt;
}

CMesure::~CMesure()
{
}

int CMesure::i_GetStateMesure()
{
	return i_StateMesure;
}

bool CMesure::f_SetStateMesure(int i_St)
{
	i_StateMesure = i_St;

	if (i_StateMesure == NULL || i_StateMesure != i_St)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int CMesure::i_GetDataMesure()
{
	return i_DataMesure;
}

bool CMesure::f_SetDataMesure(int i_Dt)
{
	i_DataMesure = i_Dt;

	if (i_DataMesure == NULL || i_DataMesure != i_Dt)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool CMesure::f_DoMesure()
{
	int val;

	f_SetStateMesure(1);

	Sleep(TIME);

	val = rand();

	f_SetStateMesure(0);

	return f_SetDataMesure(val);
}
