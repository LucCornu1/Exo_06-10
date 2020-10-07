#include "CPoint.h"
#include <iostream>
#include <math.h>

using namespace std;

const float PI = 3.14159265359;


//Constructeur
CPoint::CPoint()
{
	this->m_fltX = 0.0;
	this->m_fltY = 0.0;

	this->m_cChar = 'A';
}

CPoint::CPoint(float fltX, float fltY, char cChar)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;

	this->m_cChar = cChar;
}


//Fonctions membres
void CPoint::abscisse() const
{
	cout << "Les coordonnees X  point " << get_cChar() << " sont : " << endl;
	cout << "X : " << get_fltX() << endl;
}

void CPoint::ordonnee() const
{
	cout << "Les coordonnees Y  point " << get_cChar() << " sont : " << endl;
	cout << "Y : " << get_fltY() << endl;
}

void CPoint::deplace(float fltX, float fltY, char cChar)
{
	this->m_fltX += fltX;
	this->m_fltY += fltY;

	this->m_cChar = cChar;
}

CPoint CPoint::homotetie(CPoint ptO, float k)
{
	CPoint pt(0, 0, 'B');

	if (ptO.m_fltX == 0 && ptO.m_fltY == 0)
	{
		pt.m_fltX = this->m_fltX * k;
		pt.m_fltY = this->m_fltY * k;
	}
	else {
		pt.m_fltX = (this->m_fltX - ptO.m_fltX) * k + ptO.m_fltX;
		pt.m_fltY = (this->m_fltY - ptO.m_fltY) * k + ptO.m_fltY;
	}

	return pt;
}

CPoint CPoint::rotation(CPoint ptO, float flt_Angle)
{
	CPoint pt(0, 0, 'C');
	while (flt_Angle >= 360)
	{
		flt_Angle -= 360;
	}

	pt.m_fltX = cos(flt_Angle * PI/180) * (this->m_fltX - ptO.m_fltX) * sin(flt_Angle * PI/180) * (this->m_fltY - ptO.m_fltY) + ptO.m_fltX;
	pt.m_fltY = sin(flt_Angle * PI/180) * (this->m_fltX - ptO.m_fltX) * cos(flt_Angle * PI/180) * (this->m_fltY - ptO.m_fltY) + ptO.m_fltY;

	return pt;
}

void CPoint::polaire() const
{

	float Rho = sqrt((this->m_fltX * this->m_fltX) + (this->m_fltY * this->m_fltY)); //Racine carré de Pythagore
	float Theta;

	
	if (this->m_fltX == 0.0)
	{
		if (this->m_fltY < 0.0)
		{
			Theta = (3 * PI) / 2;
		}
		else {
			Theta = PI / 2;
		}
	}
	else if (this->m_fltX < 0.0)
	{
		Theta = atan(this->m_fltY / this->m_fltX) + PI;
	}
	else {
		if (this->m_fltY < 0.0)
		{
			Theta = atan(this->m_fltY / this->m_fltX) + 2*PI;
		}
		else {
			Theta = atan(this->m_fltY / this->m_fltX);
		}
	}


	cout << "Les coordonnees polaire du point sont : " << endl;
	cout << "Rho = " << Rho << endl;
	cout << "Theta = " << Theta/PI * 180 << " Deg" << endl;
}


//Assesseurs
float CPoint::get_fltX() const
{
	return this->m_fltX;
}

float CPoint::get_fltY() const
{
	return this->m_fltY;
}

char CPoint::get_cChar() const
{
	return this->m_cChar;
}

//Mutateur
void CPoint::set_fltX(float fltX)
{
	this->m_fltX = fltX;
}

void CPoint::set_fltY(float fltY)
{
	this->m_fltY = fltY;
}

void CPoint::set_cChar(char cChar)
{
	this->m_cChar = cChar;
}