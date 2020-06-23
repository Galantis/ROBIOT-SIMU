#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <list>
#include <Windows.h>
#include <vector>
#include <time.h>
#include <string>
#include "pch.h"

#include "CBatterie.h"
#include "CCompas.h"
#include "CCapteur.h"
#include "CComande.h"
#include "CMesure.h"
#include "CMoteur.h"

TEST(TestClasse, Mesure)
{
	CMesure mesure;//constructeur 1
	CMesure mesure2 = CMesure(1,1);//contructeur 2
	
	EXPECT_EQ(mesure.i_GetDataMesure(), 0);//verif value après la construction 1
	EXPECT_EQ(mesure.i_GetStateMesure(), 0);//verif value après la construction 1
	cout << "The value of the measurement data is : " << mesure.i_GetDataMesure() << endl;
	cout << "The state of the measure is : " << mesure.i_GetStateMesure() << endl;

	EXPECT_EQ(mesure2.i_GetDataMesure(), 1);//verif value après la construction 2
	EXPECT_EQ(mesure2.i_GetStateMesure(), 1);//verif value après la construction 2
	cout << "The value of the measurement data is : " << mesure2.i_GetDataMesure() << endl;
	cout << "The state of the measure is : " << mesure2.i_GetStateMesure() << endl;

	mesure2.f_SetDataMesure(5);
	mesure2.f_SetStateMesure(1);

	EXPECT_EQ(mesure2.i_GetDataMesure(), 5);//verif value après le set
	EXPECT_EQ(mesure2.i_GetStateMesure(), 1);//verif value après le set
	cout << "The value of the measurement data is : " << mesure2.i_GetDataMesure() << endl;
	cout << "The state of the measure is : " << mesure2.i_GetStateMesure() << endl;

	mesure.f_DoMesure();

	cout << "The result of the measure is : " << mesure.i_GetDataMesure() << endl;

	EXPECT_EQ(mesure.i_GetDataMesure(), 1);
	EXPECT_TRUE(true);
}

TEST(TestClasse, Compas)
{
	CCompas compas;//constructeur 1
	CCompas compas2 = CCompas(2, 4);//contructeur 2

	EXPECT_EQ(compas.i_GetCoordX(), 0);//verif value après la construction 1
	EXPECT_EQ(compas.i_GetCoordY(), 0);//verif value après la construction 1
	cout << "The value of coord X is : " << compas.i_GetCoordX() << endl;
	cout << "The value of coord Y is : " << compas.i_GetCoordY() << endl;

	EXPECT_EQ(compas2.i_GetCoordX(), 2);//verif value après la construction 2
	EXPECT_EQ(compas2.i_GetCoordY(), 4);//verif value après la construction 2
	cout << "The value of coord X is : " << compas2.i_GetCoordX() << endl;
	cout << "The value of coord Y is : " << compas2.i_GetCoordY() << endl;

	compas2.f_SetCoordX(10);
	compas2.f_SetCoordY(20);

	EXPECT_EQ(compas2.i_GetCoordX(), 10);//verif value après le set
	EXPECT_EQ(compas2.i_GetCoordY(), 20);//verif value après le set
	cout << "The value of coord X is : " << compas2.i_GetCoordX() << endl;
	cout << "The value of coord Y is : " << compas2.i_GetCoordY() << endl;

	EXPECT_TRUE(true);
}

TEST(TestClasse, Batterie)
{
	CBatterie batterie;//constructeur 1
	CBatterie batterie2 = CBatterie(1, 100);//contructeur 2

	EXPECT_EQ(batterie.i_GetStateBatterie(), 0);//verif value après la construction 1
	EXPECT_EQ(batterie.i_GetDataBatterie(), 0);//verif value après la construction 1
	cout << "The State of the battery is: " << batterie.i_GetStateBatterie() << endl;
	cout << "The Pourcentage of batterry is : " << batterie.i_GetDataBatterie() << endl;

	EXPECT_EQ(batterie2.i_GetStateBatterie(), 1);//verif value après la construction 2
	EXPECT_EQ(batterie2.i_GetDataBatterie(), 100);//verif value après la construction 2
	cout << "The State of the battery is: " << batterie2.i_GetStateBatterie() << endl;
	cout << "The Pourcentage of batterry is : " << batterie2.i_GetDataBatterie() << endl;

	batterie2.f_SetStateBatterie(0);
	batterie2.f_SetDataBatterie(99);

	EXPECT_EQ(batterie2.i_GetStateBatterie(), 0);//verif value après le set
	EXPECT_EQ(batterie2.i_GetDataBatterie(), 99);//verif value après le set
	cout << "The State of the battery is: " << batterie2.i_GetStateBatterie() << endl;
	cout << "The Pourcentage of batterry is : " << batterie2.i_GetDataBatterie() << endl;

	EXPECT_TRUE(true);
}

TEST(TestClasse, Commande) {
	CComande commande1;//constructeur 1
	commande1.Ouverturefichier_nbr_arbre();
	EXPECT_EQ(commande1.i_nbr_arbre_max(),40); //verif lecture fichier 
	EXPECT_TRUE(true);
}