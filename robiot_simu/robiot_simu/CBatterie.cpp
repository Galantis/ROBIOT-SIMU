#include "pch.h"
#include "CBatterie.h"
#include <chrono>
#include <windows.h>
#include <cstdlib>
#include <iostream>
#define TIME 1 //Simul temps d'attente de 1 min
/**************************************************************
* CLASSE : <CBatterie>
* PRESENTATION : <Capteur de niveau de charge de la batterie du Robiot>
*
* METHODES PUBLIQUES :
* CBatterie() : Constructeur de CBattery
* CBatterie(int i_St, int i_Dt) : Constructeur de CBattery
* ~CBatterie() : Destructeur de CBattery
* int i_GetStateBatterie() : retourne la valeur StateBattery
* bool f_SetStateBatterie(int i_St) : Met à jour la valeur StateBattery. Retourne vrai si StateBattery a été mise à jour et faux sinon
* int i_GetDataBatterie() : retourne la valeur MesureBattery
* bool f_SetDataBatterie(int i_Dt) : Met à jour la valeur de MesureBattery. Retourne vrai si MesureBattery a été mise à jour et faux sinon
* bool f_GetChargeBatterie() : Fait la mesure. Retourne vrai si DoMesure a été effectué la mesure et faux sinon
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


/**
* METHODE : <CBatterie>:::f_SetStateBatterie(int i_St)
* PRESENTATION : <Met à jour la valeur de MesureBattery>
*
* RETOUR : <bool> : <renvoi vrai quand la valeur de StateBattery a était mise à jour >
*
**/
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

/**
* METHODE : <CBatterie>::i_GetDataBatterie
* PRESENTATION : <retourne la valeur de DataBatterie>
*
* RETOUR : <int> : <renvoi la valeur de MesureBattery>
*
**/
int CBatterie::i_GetDataBatterie()
{
	return i_DataBatterie;
}

/**
* METHODE : <CBatterie>::f_SetDataBatterie(int i_Dt)
* PRESENTATION : <Met à jour la valeur de MesureBattery>
*
* RETOUR : <Bool> : <Retourne vrai si MesureBattery a été mise à jour et faux sinon>
*
**/
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
