#pragma once
#include "pch.h"

#include "CBatterie.h"
#include "CCompas.h"
#include "CCapteur.h"
#include "CComande.h"
#include "CMesure.h"

class CMoteur : public CBatterie, public CCompas, public CCapteur, public CComande, public CMesure
{
private:
	int i_X;
	int i_Y;
	bool Move;
	CBatterie batterie;
	CCompas compas;
	CCapteur capteur;
	CComande commande;
	CMesure mesure;
public:
	CMoteur();//Constructeur de CMesure
	CMoteur(int i_DataX,int i_DataY, bool Instruc_Move);//Constructeur de CMoteur
	~CMoteur();//Destructeur de CMoteur
	CBatterie* getBatterie();
	CCompas* getCompas();
	CCapteur* getCapteur();
	CComande* getCommande();
	CMesure* getMesure();
	bool f_moveRobot(CCapteur* p_capteur, CCompas* p_compas, CComande* p_commande);
};

