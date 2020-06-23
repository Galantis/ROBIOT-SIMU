#include "pch.h"
#include "CMoteur.h"

/**************************************************************
* CLASSE : <CMoteur>
* PRESENTATION : <Pilote le couple du moteur du châssis>
*
* METHODES PUBLIQUES :  
* CMoteur() : Constructeur de CMoteur
* CMoteur(int i_DataX,int i_DataY, bool Instruc_Move) : Constructeur de CMoteur
* ~CMoteur() : Destructeur de CMoteur
* CBatterie* getBatterie() : 
* CCompas* getCompas() : 
* CCapteur* getCapteur() : 
* CComande* getCommande() : 
* CMesure* getMesure() : 
* bool f_moveRobot(CCompas* p_compas, CComande* p_commande) : 
* OBSERVATIONS : **************************************************************/

/**
* METHODE : <CMoteur>::<CMoteur>
* PRESENTATION : <Constructeur de CMoteur>
*
**/
CMoteur::CMoteur()
{
	batterie = CBatterie();
	compas = CCompas();
	capteur = CCapteur();
	commande = CComande();
	mesure = CMesure();
}

/**
* METHODE : <CMoteur>::<~CMoteur>
* PRESENTATION : <Destructeur de CMoteur>
*
**/
CMoteur::~CMoteur()
{
}

/**
* METHODE : <CMoteur>::<getBatterie>
* PRESENTATION : <Recupère l'objet batterie>
*
* RETOUR : <CBatterie*> : <objet batterie>
*
**/
CBatterie* CMoteur::getBatterie()
{
	return &batterie;
}

/**
* METHODE : <CMoteur>::<getCompas>
* PRESENTATION : <Recupère l'objet compas>
*
* RETOUR : <CCompas*> : <objet compas>
*
**/
CCompas* CMoteur::getCompas()
{
	return &compas;
}

/**
* METHODE : <CMoteur>::<getCapteur>
* PRESENTATION : <Recupère l'objet capteur>
*
* RETOUR : <CCapteur*> : <objet capteur>
*
**/
CCapteur* CMoteur::getCapteur()
{
	return &capteur;
}

/**
* METHODE : <CMoteur>::<getCommande>
* PRESENTATION : <Recupère l'objet commande>
*
* RETOUR : <CComande*> : <objet commande>
*
**/
CComande* CMoteur::getCommande()
{
	return &commande;
}

/**
* METHODE : <CMoteur>::<getMesure>
* PRESENTATION : <Recupère l'objet mesure>
*
* RETOUR : <CMesure*> : <objet mesure>
*
**/
CMesure* CMoteur::getMesure()
{
	return &mesure;
}

/**
* METHODE : <CMoteur>::<f_moveRobot>
* PRESENTATION : <Move the robot>
*
*	<p_capteur> : <objet capteur> *
	<p_compas> : <objet compas> *
	<p_commande> : <objet commande> *
*
* RETOUR : <bool> : <Si le robot à avancer avec succès>
*
**/
bool CMoteur::f_moveRobot(CCapteur* p_capteur, CCompas* p_compas, CComande* p_commande)
{
	int destX = p_commande->f_Get_abres_cordonne_X();
	int destY = p_commande->f_Get_abres_cordonne_Y();
	int posX = p_compas->i_GetCoordX();
	int posY = p_compas->i_GetCoordY();
	int acutalL = p_commande->i_getActualLigne();

	while ((posX != destX))
	{
		//passage d'obstacles
		if ((p_capteur->c_GetCartographie(posX + 1, posY) == 0x58/*X*/))
		{
			if ((p_capteur->c_GetCartographie(posX, posY + 1) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posY + 1);

				while ((p_capteur->c_GetCartographie(posX + 1, posY - 1) == 0x58/*X*/))
				{
					p_compas->f_SetCoordX(posX + 1);
				}

				p_compas->f_SetCoordY(posY - 1);
			}
			else if ((p_capteur->c_GetCartographie(posX, posY - 1) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posY - 1);

				while ((p_capteur->c_GetCartographie(posX + 1, posY + 1) == 0x58/*X*/))
				{
					p_compas->f_SetCoordX(posX + 1);
				}

				p_compas->f_SetCoordY(posY + 1);
			}
		}
		else
		{
			p_compas->f_SetCoordX(posX + 1);
		}
	}

	while ((posY != destY))
	{
		//passage d'obstacles
		if ((p_capteur->c_GetCartographie(posX, posY + 1) == 0x58/*X*/))
		{
			if ((p_capteur->c_GetCartographie(posX + 1, posY) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posX + 1);

				while ((p_capteur->c_GetCartographie(posX - 1, posY + 1) == 0x58/*X*/))
				{
					p_compas->f_SetCoordX(posY + 1);
				}

				p_compas->f_SetCoordY(posX - 1);
			}
			else if ((p_capteur->c_GetCartographie(posX, posY - 1) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posX - 1);

				while ((p_capteur->c_GetCartographie(posX + 1, posY - 1) == 0x58/*X*/))
				{
					p_compas->f_SetCoordX(posY + 1);
				}

				p_compas->f_SetCoordY(posX + 1);
			}
		}
		else
		{
			p_compas->f_SetCoordX(posX + 1);
		}
	}

	return false;
}
