#include "pch.h"
#include "CMesure.h"
#include <chrono>
#include <windows.h>
#include <cstdlib>
#include <iostream>
/**************************************************************
* CLASSE : <CMesure>
* PRESENTATION : <Pilote d’outil de mesure forestier>
*
* METHODES PUBLIQUES :
* CMesure() : Constructeur de CMesure
* CMesure(int i_St,int i_Dt) : Constructeur de CMesure
* ~CMesure() : Destructeur de CMesure
* int i_GetStateMesure() : Retourne la valeur StateMesure
* bool f_SetStateMesure(int i_St) : Met à jour la valeur StateMesure. Retourne vrai si StateMesure a été mise à jour et faux sinon
* int i_GetDataMesure() : Retourne la valeur de DataMesure
* bool f_SetDataMesure(int i_Dt) : Met à jour la valeur de DataMesure. Retourne vrai si DataMesure a été mise à jour et faux sinon
* bool f_DoMesure() : Fait la mesure. Retourne vrai si DoMesure a été effectué la mesure et faux sinon
* OBSERVATIONS : **************************************************************/


/**
* METHODE : <CMesure>::<CMesure>
* PRESENTATION : <Constructeur de CMesure>
*
**/
CMesure::CMesure() : i_StateMesure(0), i_DataMesure(0)
{

}

/**
* METHODE : <CMesure>::<CMesure>
* PRESENTATION : <Constructeur de CMesure>
*
*	<i_St> : <StateMesure> *
	<i_Dt> : <DataMesure> *
*
**/
CMesure::CMesure(int i_St, int i_Dt)
{
	i_StateMesure = i_St;
	i_DataMesure = i_Dt;
}

/**
* METHODE : <CMesure>::<~CMesure>
* PRESENTATION : <Destructeur de CMesure>
*
**/
CMesure::~CMesure()
{
}

/**
* METHODE : <CMesure>::<i_GetStateMesure>
* PRESENTATION : <Get the mesure>
*
* RETOUR : <int> : <Value of the mesure>
*
**/
int CMesure::i_GetStateMesure()
{
	return i_StateMesure;
}

/**
* METHODE : <CMesure>::<f_SetStateMesure>
* PRESENTATION : <set the state of the mesure>
*
*	<i_St> : <state de la mesure > *
*
* RETOUR : <bool> : <Si le robot le changement a été fait avec succes>
*
**/
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

/**
* METHODE : <CMesure>::<i_GetDataMesure>
* PRESENTATION : <get dataMesure>
*
* RETOUR : <int> : <Value of DataMesure>
*
**/
int CMesure::i_GetDataMesure()
{
	return i_DataMesure;
}

/**
* METHODE : <CMesure>::<f_SetDataMesure>
* PRESENTATION : <set DataMeruse>
*
*	<i_Dt> : <value of i_Dt to set DataMesure> *
*
* RETOUR : <bool> : <Si le robot le changement a été fait avec succes>
*
**/
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

/**
* METHODE : <CMesure>::<f_DoMesure>
* PRESENTATION : <simulate the mesure>
*
* RETOUR : <bool> : <Si le robot le changement a été fait avec succes>
*
**/
bool CMesure::f_DoMesure()
{
	int val;

	f_SetStateMesure(1);

	Sleep(TIME);//TIMME est plus cours pour simuler et pas attendre 5 min

	val = 1;//mesure faites

	f_SetStateMesure(0);

	return f_SetDataMesure(val);
}
