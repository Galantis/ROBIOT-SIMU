#pragma once
class CMoteur
{
private:
	int i_X;
	int i_Y;
	bool Move;
public:
	CMoteur();//Constructeur de CMesure
	CMoteur(int i_DataX,int i_DataY, bool Instruc_Move);//Constructeur de CMoteur
	~CMoteur();//Destructeur de CMoteur
	bool f_Move(); // Deplace le robot. Retourne vrai si la position finale est bien la position souhaité sinon faux
};

