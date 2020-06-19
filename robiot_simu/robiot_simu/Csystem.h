#pragma once
#include "pch.h"

#include "CBatterie.h"
#include "CCompas.h"
#include "CCapteur.h"
#include "CComande.h"
#include "CMesure.h"
#include "CMoteur.h"

class Csystem : public CBatterie, public CCompas, public CCapteur, public CComande, public CMesure, public CMoteur
{
private:
	CBatterie batterie;
	CCompas compas;
	CCapteur capteur;
	CComande commande;
	CMesure mesure;
	CMoteur moteur;
public:
	Csystem();
	~Csystem();
	CBatterie* getBatterie();
	CCompas* getCompas();
	CCapteur* getCapteur();
	CComande* getCommande();
	CMesure* getMesure();
	CMoteur* getMoteur();
	bool f_moveRobot(CMoteur* p_moteur, CCompas* p_compas, CComande* p_commande);
};

