#include "CPoint.h"
#include <iostream>

using namespace std;

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