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

bool Csystem::f_moveRobot(CMoteur* p_moteur, CCompas* p_compas, CComande* p_commande)
{
	int destX = p_commande;
	int destY = p_commande;
	int posX = p_compas->i_GetCoordX();
	int posY = p_compas->i_GetCoordY();
	int acutalL = p_commande->i_getActualLigne();

	while ((posX != destX))
	{
		//passage d'obstacles
		if ((p_commande->c_GetCartographie(posX + 1, posY) == 0x58/*X*/))
		{
			if ((p_commande->c_GetCartographie(posX, posY + 1) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posY + 1);

				while ((p_commande->c_GetCartographie(posX + 1, posY - 1) == 0x58/*X*/))
				{
					p_compas->f_SetCoordX(posX + 1);
				}

				p_compas->f_SetCoordY(posY - 1);
			}
			else if ((p_commande->c_GetCartographie(posX, posY - 1) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posY - 1);

				while ((p_commande->c_GetCartographie(posX + 1, posY + 1) == 0x58/*X*/))
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
		if ((p_commande->c_GetCartographie(posX, posY + 1) == 0x58/*X*/))
		{
			if ((p_commande->c_GetCartographie(posX + 1, posY) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posX + 1);

				while ((p_commande->c_GetCartographie(posX - 1, posY + 1) == 0x58/*X*/))
				{
					p_compas->f_SetCoordX(posY + 1);
				}

				p_compas->f_SetCoordY(posX - 1);
			}
			else if ((p_commande->c_GetCartographie(posX, posY - 1) != 0x58/*X*/))
			{
				p_compas->f_SetCoordY(posX - 1);

				while ((p_commande->c_GetCartographie(posX + 1, posY - 1) == 0x58/*X*/))
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
