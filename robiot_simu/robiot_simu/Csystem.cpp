#include "pch.h"
#include "Csystem.h"

Csystem::Csystem()
{
	batterie = CBatterie();
	compas = CCompas();
	capteur = CCapteur();
	commande = CComande();
	mesure = CMesure();
	moteur = CMoteur();
}

Csystem::~Csystem()
{
}

CBatterie* Csystem::getBatterie()
{
	return &batterie;
}

CCompas* Csystem::getCompas()
{
	return &compas;
}

CCapteur* Csystem::getCapteur()
{
	return &capteur;
}

CComande* Csystem::getCommande()
{
	return &commande;
}

CMesure* Csystem::getMesure()
{
	return &mesure;
}

CMoteur* Csystem::getMoteur()
{
	return &moteur;
}
