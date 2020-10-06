#pragma once

class CPoint
{
private:
	float m_fltX;
	float m_fltY;

	char m_cChar;

public:
	//Constructeur
	CPoint();

	CPoint(float, float, char);


	//Fonctions membres
	void abscisse() const;
	void ordonnee() const;

	void deplace(float, float, char);


	//Assesseur
	float get_fltX() const;
	float get_fltY() const;
	char get_cChar() const;

	//Mutateur
	void set_fltX(float);
	void set_fltY(float);
	void set_cChar(char);
};